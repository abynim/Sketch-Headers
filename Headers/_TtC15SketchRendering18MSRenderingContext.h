//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSBitmapEffectsContextPool, MSExportRequest, MSImmutableColor, MSRenderingRequest, NSString;

@interface _TtC15SketchRendering18MSRenderingContext : NSObject
{
    // Error parsing type: , name: impositor
    // Error parsing type: , name: renderingRequest
    // Error parsing type: , name: bitmapEffectsContextPool
    // Error parsing type: , name: _rectsBeingDrawn
    // Error parsing type: , name: driver
    // Error parsing type: , name: influenceRectCache
    // Error parsing type: , name: name
    // Error parsing type: , name: parentGroupStack
    // Error parsing type: , name: isCancelled
    // Error parsing type: , name: tintColor
    // Error parsing type: , name: exportRequest
    // Error parsing type: , name: symbolMasterStack
    // Error parsing type: , name: symbolInstanceStack
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL isDrawingSymbolInstance;
@property(nonatomic, retain) MSExportRequest *exportRequest; // @synthesize exportRequest;
@property(nonatomic, retain) MSImmutableColor *tintColor; // @synthesize tintColor;
- (void)flushWithDispatchGroup:(id)arg1;
- (void)flush;
- (void)renderLayer:(id)arg1;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, retain) MSBitmapEffectsContextPool *bitmapEffectsContextPool; // @synthesize bitmapEffectsContextPool;
@property(nonatomic, readonly) MSRenderingRequest *renderingRequest; // @synthesize renderingRequest;
- (id)initWithData:(void *)arg1 rect:(struct CGRect)arg2 bytesPerRow:(long long)arg3 alphaInfo:(unsigned int)arg4 driver:(id)arg5 renderingRequest:(id)arg6 bitmapEffectsContextPool:(id)arg7;
- (id)initWithCGContext:(struct CGContext *)arg1 driver:(id)arg2 renderingRequest:(id)arg3 bitmapEffectsContextPool:(id)arg4;
- (id)initWithPRFile:(id)arg1 driver:(id)arg2 renderingRequest:(id)arg3 rect:(struct CGRect)arg4;

@end

