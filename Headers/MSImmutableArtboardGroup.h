//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableArtboardGroup.h>

#import <SketchModel/MSArtboardGroupProtocol-Protocol.h>
#import <SketchModel/MSCloudExportableRootLayer-Protocol.h>
#import <SketchModel/MSColorReadable-Protocol.h>
#import <SketchModel/MSImmutableRootLayer-Protocol.h>
#import <SketchModel/MSLayerWithBackgroundColor-Protocol.h>

@class MSArtboardPreset, MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSArray, NSString;

@interface MSImmutableArtboardGroup : _MSImmutableArtboardGroup <MSCloudExportableRootLayer, MSLayerWithBackgroundColor, MSArtboardGroupProtocol, MSImmutableRootLayer, MSColorReadable>
{
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1 currentSelection:(id)arg2 ancestry:(id)arg3;
@property(readonly, nonatomic) NSArray *updateableColors;
@property(readonly, nonatomic) MSArtboardPreset *preset;
- (id)immutableBackgroundColor;
@property(readonly, nonatomic) struct CGPoint rulerBase;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (BOOL)influenceRectClipsToBounds;
- (void)performInitWithUnarchiver:(id)arg1;
@property(readonly, nonatomic) BOOL containsFixedLayers;
- (struct CGRect)rectInFixedViewportWithRect:(struct CGRect)arg1 fromFixingLayer:(id)arg2;
- (unsigned long long)prototypeLayerBehaviorWithRect:(struct CGRect)arg1 fromLayer:(id)arg2;
@property(readonly, nonatomic) BOOL cloudShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *cloudBackgoundColor;
- (struct CGRect)contentBoundsForDocument:(id)arg1;
- (BOOL)canBreakMaskChain;
- (void)migratePropertiesFromV119OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV100OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV57OrEarlierWithUnarchiver:(id)arg1;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 currentSelection:(id)arg4 ancestry:(id)arg5;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

