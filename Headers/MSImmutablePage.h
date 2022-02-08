//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutablePage.h>

#import <SketchModel/MSCloudExportableRootLayer-Protocol.h>
#import <SketchModel/MSImmutableRootLayer-Protocol.h>

@class MSArtboardPreset, MSImmutableColor, MSImmutableLayerGroup, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSArray, NSSet, NSString;
@protocol MSImmutableRootLayer;

@interface MSImmutablePage : _MSImmutablePage <MSCloudExportableRootLayer, MSImmutableRootLayer>
{
    MSImmutableLayerGroup<MSImmutableRootLayer> *_currentRoot;
    NSSet *_selectedLayerPaths;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *selectedLayerPaths; // @synthesize selectedLayerPaths=_selectedLayerPaths;
@property(readonly) NSSet *oldSelectedLayerIDs;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1 currentSelection:(id)arg2 ancestry:(id)arg3;
- (BOOL)limitsSelectionToBounds;
@property(readonly, nonatomic) NSArray *symbols;
@property(readonly, nonatomic) BOOL hasArtboards;
@property(readonly, nonatomic) NSArray *artboards;
@property(readonly, nonatomic) struct CGPoint rulerBase;
- (id)archiveReferenceIdentifier_bc;
- (struct CGPoint)origin;
- (struct CGRect)rect;
@property(readonly, nonatomic) MSImmutableLayerGroup<MSImmutableRootLayer> *currentRoot;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitWithMutableModelObject:(id)arg1;
@property(readonly, nonatomic) BOOL containsFixedLayers;
@property(readonly, nonatomic) MSArtboardPreset *preset;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL cloudShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *cloudBackgoundColor;
- (struct CGRect)contentBoundsForDocument:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 zoomValue:(double)arg2 currentSelection:(id)arg3 ancestry:(id)arg4;
- (BOOL)isTooSmallForPreciseHitTestingAtZoomValue:(double)arg1;
- (BOOL)shouldDiffSublayersForDifferingLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

