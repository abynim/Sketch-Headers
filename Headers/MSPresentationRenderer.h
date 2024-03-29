//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSTilingSystemProvider-Protocol.h>

@class CALayer, MSCacheManager, MSRenderInstruction, NSArray, NSView;
@protocol MSTiledRendererHostView;

@interface MSPresentationRenderer : NSObject <MSTilingSystemProvider>
{
    BOOL _hasRenderingScheduled;
    NSView<MSTiledRendererHostView> *hostView;
    CALayer *layer;
    NSArray *_formats;
    MSRenderInstruction *_renderedInstruction;
    MSCacheManager *_cacheManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasRenderingScheduled; // @synthesize hasRenderingScheduled=_hasRenderingScheduled;
@property(readonly, nonatomic) MSCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(copy) MSRenderInstruction *renderedInstruction; // @synthesize renderedInstruction=_renderedInstruction;
@property(retain, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView;
- (BOOL)isDrawing;
- (id)fileNameForLayer:(id)arg1;
- (id)updateContentWithRenderInstruction:(id)arg1 page:(id)arg2 layer:(id)arg3 fileURL:(id)arg4 synchronously:(BOOL)arg5 error:(id *)arg6;
- (void)updateContentWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (id)updateContentWithLayerAncestry:(id)arg1 writingToFileURL:(id)arg2 withError:(id *)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

@end

