//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSShapePathLayer.h>

#import <SketchModel/MSPathLayer-Protocol.h>

@class MSCurvePoint, MSPath, NSString;

@interface MSShapePathLayer : _MSShapePathLayer <MSPathLayer>
{
    BOOL _isEditing;
}

+ (void)performBatchEdits:(CDUnknownBlockType)arg1;
+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)layerWithShapeGroupSubpath:(id)arg1;
+ (id)layerWithPath:(id)arg1 integralFrame:(BOOL)arg2;
+ (id)layerWithPath:(id)arg1;
+ (void)applyCornerRadiusValuesFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void)resizeWithOldGroupSize:(struct CGSize)arg1;
- (long long)cornerForLinePointAtIndex:(unsigned long long)arg1;
- (BOOL)isPolygon;
- (BOOL)isRectangle;
- (BOOL)attemptToSimplifyBetweenPoint:(id)arg1 andPoint:(id)arg2 pathToLayerTransform:(struct CGAffineTransform)arg3;
- (BOOL)simplifyPathOnce;
- (void)simplify;
- (id)pointsAroundIndex:(unsigned long long)arg1;
- (id)flattenedLayer;
@property(readonly, nonatomic) BOOL canFlatten;
@property(readonly, nonatomic) MSCurvePoint *lastPoint;
@property(readonly, nonatomic) MSCurvePoint *firstPoint;
@property(readonly, nonatomic) unsigned long long numberOfCurvePoints;
@property(readonly, nonatomic) BOOL hasRoundedCorners;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setEndMarkerType:(unsigned long long)arg1;
- (void)setStartMarkerType:(unsigned long long)arg1;
- (double)distanceSquaredToSegmentAtIndex:(unsigned long long)arg1 fromPoint:(struct CGPoint)arg2 tolerance:(double)arg3;
- (unsigned long long)indexOfSegmentAtPoint:(struct CGPoint)arg1 tolerance:(struct CGSize)arg2;
- (void)multiplyBy:(double)arg1;
- (BOOL)isPartOfClippingMask;
- (BOOL)isNearlyEmpty;
- (void)didEdit;
- (struct CGPoint)pointCenteredAfterPointIndex:(unsigned long long)arg1;
- (void)setPath:(id)arg1 inCoordinateSpace:(id)arg2;
@property(copy, nonatomic) MSPath *pathInFrame; // @dynamic pathInFrame;
- (void)adjustGeometryToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)optimalBoundingBoxIntegral:(BOOL)arg1;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1 fixAncestors:(BOOL)arg2;
- (void)applyAffineTransformToPath:(struct CGAffineTransform)arg1;
- (void)reversePath;
- (BOOL)editable;
- (void)resetPoints;
- (void)setNilValueForKey:(id)arg1;
- (void)resetPointsBasedOnUserInteraction;
- (void)willMoveToParentObject:(id)arg1;
- (id)usedStyle;
- (id)initWithDefaults:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (id)defaultCurvePoints;
- (void)applyUserVisibleRotation:(double)arg1 explicitRotationCenter:(id)arg2;
- (double)userVisibleRotation;
@property(readonly, nonatomic) double slope;
@property(nonatomic) double length; // @dynamic length;
@property(nonatomic) double y2; // @dynamic y2;
@property(nonatomic) double x2; // @dynamic x2;
@property(nonatomic) double y1; // @dynamic y1;
@property(nonatomic) double x1; // @dynamic x1;
- (void)setP2:(struct CGPoint)arg1;
- (struct CGPoint)p2;
- (void)setP1:(struct CGPoint)arg1;
- (struct CGPoint)p1;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL edited;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(nonatomic) BOOL isClosed;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) Class superclass;

@end

