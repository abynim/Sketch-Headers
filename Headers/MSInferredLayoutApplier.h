//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableLayerGroup, MSLayerGroup;

@interface MSInferredLayoutApplier : NSObject
{
    MSImmutableLayerGroup *_groupBefore;
    MSLayerGroup *_groupAfter;
}

+ (void)applyInferredLayoutRulesInGroup:(id)arg1 recordedState:(id)arg2;
@property(retain, nonatomic) MSLayerGroup *groupAfter; // @synthesize groupAfter=_groupAfter;
@property(retain, nonatomic) MSImmutableLayerGroup *groupBefore; // @synthesize groupBefore=_groupBefore;
- (void).cxx_destruct;
- (BOOL)layer:(id)arg1 isPinnedMaxOnAxis:(unsigned long long)arg2;
- (BOOL)layer:(id)arg1 isPinnedMinOnAxis:(unsigned long long)arg2;
- (BOOL)layer:(id)arg1 isFixedOnAxis:(unsigned long long)arg2;
- (struct CGRect)originalRectOfLayer:(id)arg1;
- (unsigned long long)layoutAnchor;
- (unsigned long long)axis;
- (void)adjustGroupBoundsWithChange:(double)arg1;
- (unsigned long long)layoutChangeForLayer:(id)arg1 becauseOfChangeInRegion:(id)arg2;
- (void)applyInferredLayoutToLayer:(id)arg1 becauseOfChangeInRegion:(id)arg2;
- (id)changedLayers;
- (void)applyInferredLayoutRules;
- (id)initWithGroup:(id)arg1 recordedState:(id)arg2;

@end

