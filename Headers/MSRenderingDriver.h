//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface MSRenderingDriver : NSObject
{
    NSMapTable *_renderers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *renderers; // @synthesize renderers=_renderers;
- (id)contextWithName:(id)arg1 forCGContext:(struct CGContext *)arg2 renderingRequest:(id)arg3;
- (id)rendererForObject:(id)arg1;
- (id)setupRendererMap;
- (id)init;

@end

