//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCCache;

@interface _TtC11SketchModel21MSDetachedSymbolCache : NSObject
{
    // Error parsing type: , name: cache
    // Error parsing type: , name: optimalBoundsCache
    // Error parsing type: , name: textLayerCache
}

- (void).cxx_destruct;
- (id)init;
- (void)clearCachesNotOwnedByDocument:(id)arg1;
- (void)clearCacheForOwner:(id)arg1;
- (id)detachedGroupForSymbol:(id)arg1 andKey:(id)arg2 orCreateWith:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) BCCache *textLayerCache; // @synthesize textLayerCache;
@property(nonatomic, readonly) BCCache *optimalBoundsCache; // @synthesize optimalBoundsCache;
@property(nonatomic, readonly) BCCache *cache; // @synthesize cache;

@end

