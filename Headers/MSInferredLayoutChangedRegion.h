//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface MSInferredLayoutChangedRegion : NSObject
{
    NSMutableDictionary *_changedLayerPairs;
    NSMutableDictionary *_allLayerPairs;
    struct _NSRange _calculatedRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allLayerPairs; // @synthesize allLayerPairs=_allLayerPairs;
@property(retain, nonatomic) NSMutableDictionary *changedLayerPairs; // @synthesize changedLayerPairs=_changedLayerPairs;
@property(nonatomic) struct _NSRange calculatedRange; // @synthesize calculatedRange=_calculatedRange;
- (id)description;
@property(readonly, nonatomic) double overallChangeInSize;
@property(readonly, nonatomic) double updatedChangeInSize;
- (double)changeInSize:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasChanges;
- (BOOL)containsLayer:(id)arg1;
@property(readonly, nonatomic) NSArray *unchangedLayers;
- (void)addUnchangedLayerPair:(id)arg1;
- (void)addChangedLayerPair:(id)arg1;
- (BOOL)shouldIncludeLayerPair:(id)arg1;
@property(readonly, nonatomic) struct CGRect oldChangedUnionRect;
- (struct CGRect)areaOfRegionIncludingUnchangedLayers:(BOOL)arg1 forOldState:(BOOL)arg2;
- (id)init;

@end

