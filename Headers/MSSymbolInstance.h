//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSSymbolInstance.h>

@class MSOverrideRepresentationContainer, MSSymbolMaster, NSArray, NSDictionary, NSSet;

@interface MSSymbolInstance : _MSSymbolInstance
{
    MSOverrideRepresentationContainer *_overrideContainer;
}

- (void).cxx_destruct;
- (BOOL)invalidateIfAffectedBySymbolMastersIn:(id)arg1;
- (void)applyOverride:(id)arg1 withContext:(id)arg2;
- (void)removeShareableObjectsFromOverrides:(id)arg1;
- (void)applyOverrides:(id)arg1 withContext:(id)arg2;
- (void)setValue:(id)arg1 forOverridePoint:(id)arg2;
- (BOOL)shouldResizeRespectOwnLayoutDirection:(id)arg1;
- (void)didResizeToFitContentsWithMaster:(id)arg1 oldRect:(struct CGRect)arg2;
- (void)resizeToFitContentsIfNeededWithDocument:(id)arg1 skipCache:(BOOL)arg2 visitedSymbols:(id)arg3;
- (void)resizeToFitContentsIfNeededNoCache;
- (void)resizeToFitContentsIfNeeded;
- (id)setValueWithoutMapping:(id)arg1 forOverridePointNamed:(id)arg2;
- (void)updateOverridesWithObjectIDMap:(id)arg1;
- (BOOL)isExpanded;
- (void)addObjectsAutoExpandedBySelectionTo:(id)arg1;
@property(readonly, nonatomic) NSSet *influencingSymbolIDs;
- (BOOL)canScale;
- (BOOL)canBeTransformed;
- (struct CGSize)naturalSize;
- (void)multiplyBy:(double)arg1;
- (double)scale;
- (void)resetSizeToMaster;
- (void)updateOverrides:(id)arg1 withMapping:(id)arg2;
- (void)resizeInstanceToFitSymbol:(id)arg1;
- (id)detachByReplacingWithGroupWithInfo:(id)arg1 visitedSymbols:(id)arg2;
- (id)detachStylesAndReplaceWithGroupRecursively:(BOOL)arg1 document:(id)arg2;
- (id)detachStylesAndReplaceWithGroupRecursively:(BOOL)arg1;
- (void)changeInstanceToSymbol:(id)arg1;
- (BOOL)isInstanceForMaster:(id)arg1;
- (id)symbolID;
@property(readonly, nonatomic) MSOverrideRepresentationContainer *overrideContainer; // @synthesize overrideContainer=_overrideContainer;
- (id)detachedLayerGroupRecursively:(BOOL)arg1;
@property(readonly, nonatomic) MSSymbolMaster *symbolMaster;
@property(nonatomic, readonly) NSArray *updateableColors;
- (void)updateColorsUsing:(id)arg1;
- (void)updateColorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)mapOverridesUnderOverridePoint:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSDictionary *overrides;
- (id)setupWithLayerBuilderDictionary:(id)arg1;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3;
- (id)sharedStylesReferencedInDocument:(id)arg1;
- (id)overrideMatchingPoint:(id)arg1;
@property(readonly, nonatomic) NSArray *availableOverrides;
@property(readonly, nonatomic) NSArray *overridePoints;
- (void)updateSwatchReferencesFrom:(id)arg1 to:(id)arg2;
- (void)updateSharedStyleReferencesFrom:(id)arg1 to:(id)arg2;

@end

