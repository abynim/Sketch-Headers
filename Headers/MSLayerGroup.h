//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSLayerGroup.h>

#import <SketchModel/MSLayerGroup-Protocol.h>

@class NSArray;

@interface MSLayerGroup : _MSLayerGroup <MSLayerGroup>
{
    long long _preCalculatedHasSelectedLayer;
    unsigned long long _disableAutomaticScalingCounter;
}

+ (id)groupWithLayers:(id)arg1;
+ (id)groupWithLayer:(id)arg1;
@property(nonatomic) unsigned long long disableAutomaticScalingCounter; // @synthesize disableAutomaticScalingCounter=_disableAutomaticScalingCounter;
@property(nonatomic) long long preCalculatedHasSelectedLayer; // @synthesize preCalculatedHasSelectedLayer=_preCalculatedHasSelectedLayer;
- (BOOL)ancestorsOrSelfHaveInferredLayout;
- (void)setInferredLayoutOnAxis:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (BOOL)shouldGrowSizeOfGroupForInferredLayout;
- (id)candidatesForMasking;
- (void)layerDidEndResize;
- (void)layerWillStartResize;
- (void)rect:(id)arg1 didChangeFromRect:(struct CGRect)arg2;
- (void)resizeChildrenWithOldSize:(struct CGSize)arg1;
- (struct CGSize)calculateMinimumSize;
- (id)defaultLayout;
@property(readonly, nonatomic) BOOL isAutomaticScalingEnabled;
- (void)disableAutomaticScalingInBlock:(CDUnknownBlockType)arg1;
- (void)multiplyBy:(double)arg1;
- (void)insertLayer:(id)arg1 afterLayerOrAtEnd:(id)arg2;
- (void)moveTransformsToChildren;
- (BOOL)fixGeometryWithOptions:(long long)arg1 allowedAxes:(unsigned long long)arg2;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (BOOL)groupBoundsShouldBeIntegral;
@property(nonatomic) BOOL hasInferredLayout;
- (BOOL)shouldResizeToFitBounds:(struct CGRect)arg1;
- (struct CGRect)optimalBoundingBox;
- (struct CGRect)optimalBoundingBoxInParentCoordinates;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
- (BOOL)containsSelectedItemIncludingSelf:(BOOL)arg1;
- (BOOL)isExpanded;
- (void)deselectLayerAndParent;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)setStyle:(id)arg1;
- (BOOL)canContainLayer:(id)arg1;
- (id)defaultStyle;
- (id)parentGroupRecursive;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (void)enumerateLayersAvoidingFaultingWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)correctInvalidGamma;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)CSSAttributeString;
- (void)applyTransformsToLayers:(id)arg1;
- (id)ungroupReturningNextUngroupGroup;
- (BOOL)hasStyleOrTransform;
- (void)translateChildrenFrameToLayers:(id)arg1;
- (id)moveLayersToParent;
- (void)ungroupSingleChildDescendentGroups;
- (id)ungroup;
- (void)updateSharedStyleReferencesFrom:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *layers;

@end

