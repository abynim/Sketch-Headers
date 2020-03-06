//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSArtboardGroup.h>

#import <SketchModel/MSArtboardGroup-Protocol.h>
#import <SketchModel/MSColorConvertible-Protocol.h>
#import <SketchModel/MSLayerWithMutableBackgroundColor-Protocol.h>
#import <SketchModel/MSRootLayer-Protocol.h>

@class MSArtboardPreset, MSColor, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSString;
@protocol MSLayerCoordinateSpace;

@interface MSArtboardGroup : _MSArtboardGroup <MSArtboardGroup, MSRootLayer, MSLayerWithMutableBackgroundColor, MSColorConvertible>
{
    id <MSLayerCoordinateSpace> _rulerCoordinateSpace;
}

+ (unsigned long long)traits;
- (void).cxx_destruct;
- (BOOL)shouldGrowSizeOfGroupForInferredLayout;
- (void)setShouldBreakMaskChain:(BOOL)arg1;
- (void)convertColorsUsing:(id)arg1;
- (id)immutableBackgroundColor;
- (id)closestClippingLayer;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)rootForNameUniquing;
- (void)moveChildrenToIdenticalPositionAfterResizeFromRect:(struct CGRect)arg1;
- (struct CGSize)calculateMinimumSize;
- (void)layerDidEndResize;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)isExpanded;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveBySuggestedOffset:(struct CGVector)arg1;
@property(retain, nonatomic) MSArtboardPreset *preset;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)setRect:(struct CGRect)arg1;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (void)resizeToFitChildren;
- (id)parentRoot;
- (id)parentArtboard;
- (id)rulerCoordinateSpace;
@property(nonatomic) struct CGPoint rulerBase;
- (BOOL)constrainProportions;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
@property(readonly, nonatomic) double rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)isAutomaticScalingEnabled;
- (BOOL)hasClickThrough;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
- (id)defaultArtboardStyle;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(retain, nonatomic) MSColor *backgroundColor;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isVisible;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

