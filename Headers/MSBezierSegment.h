//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/NSCopying-Protocol.h>

@class NSSet;

@interface MSBezierSegment : NSObject <NSCopying>
{
    struct BCBezierSegment _segmentData;
    double _lineLength;
    // Error parsing type: A^v, name: _lineLengthAtomicPointer
    double _arcLength;
    // Error parsing type: A^v, name: _arcLengthAtomicPointer
    struct CGRect _bounds;
    // Error parsing type: A^v, name: _boundsAtomicPointer
    BOOL _looksLikeALine;
    // Error parsing type: A^v, name: _looksLikeALineAtomicPointer
    BOOL _isAPoint;
    // Error parsing type: A^v, name: _isAPointAtomicPointer
    double _maximumInset;
    // Error parsing type: A^v, name: _maximumInsetAtomicPointer
    NSSet *_inflectionOffsets;
    // Error parsing type: A^v, name: _inflectionOffsetsAtomicPointer
    NSSet *_xAxisRoots;
    // Error parsing type: A^v, name: _xAxisRootsAtomicPointer
    NSSet *_yAxisRoots;
    // Error parsing type: A^v, name: _yAxisRootsAtomicPointer
    MSBezierSegment *_derivative;
    // Error parsing type: A^v, name: _derivativeAtomicPointer
    CDStruct_aa84902a _fromRange;
}

+ (id)cubicSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
+ (id)quadraticSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3;
+ (id)lineSegmentWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_aa84902a fromRange; // @synthesize fromRange=_fromRange;
- (id)debugQuickLookObject;
- (id)description;
- (id)repr;
- (id)bezierPath;
- (BOOL)isEqualToBezierSegment:(id)arg1;
- (void)appendToCGPath:(struct CGPath *)arg1 orBezierPath:(id)arg2;
- (struct CGRect)bounds;
- (id)segmentForJoiningWithC1ContinuityToSegment:(id)arg1;
- (struct CGRect)controlPointBounds;
@property(readonly, nonatomic) NSSet *yAxisRoots;
@property(readonly, nonatomic) NSSet *xAxisRoots;
- (id)intersectionsWithVerticalLineAt:(double)arg1;
- (id)intersectionsWithHorizontalLineAt:(double)arg1;
@property(readonly, nonatomic) NSSet *inflectionOffsets;
@property(readonly, nonatomic) double flatness;
- (id)normalizedSegment;
@property(readonly, nonatomic) double curviness;
- (id)derivative;
- (id)reversedSegment;
@property(readonly, nonatomic) MSBezierSegment *lowestOrderRepresentation;
- (id)representationUsingType:(unsigned long long)arg1;
- (id)quadraticApproximation;
- (id)segmentsBySplittingAtOffsets:(id)arg1;
- (id)segmentsByClippingToRect:(struct CGRect)arg1;
- (id)cubicRepresentation;
- (id)quadraticRepresentation;
@property(readonly, nonatomic) MSBezierSegment *lineRepresentation;
- (id)segmentWithInset:(double)arg1;
- (id)segmentsWithFlatness:(double)arg1;
- (id)segmentWithTransform:(struct CGAffineTransform)arg1;
- (id)segmentByMovingPointAtOffset:(double)arg1 toLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGAffineTransform transformForXAxisAlignment;
- (id)segmentInRange:(CDStruct_aa84902a)arg1;
- (id)segmentFromOffset:(double)arg1;
- (id)segmentToOffset:(double)arg1;
- (id)intersectionsWithSegment:(id)arg1;
- (id)offsetsOfIntersectionsWithTangent:(struct BCLine)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (double)offsetForNormalToPoint:(struct CGPoint)arg1;
- (double)curvatureAtOffset:(double)arg1;
- (double)curvatureAtEndPoint2;
- (double)curvatureAtEndPoint1;
- (double)curvatureFromPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3;
- (struct CGPoint)pointAtOffset:(double)arg1;
- (struct BCLine)tangentAtOffset:(double)arg1;
- (void)enumeratePoints:(unsigned long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)tangent:(struct BCLine *)arg1 andPoint:(struct CGPoint *)arg2 atOffset:(double)arg3;
- (void)quadraticDeCasteljauAt:(double)arg1 points:(struct CGPoint *)arg2;
- (void)cubicDeCasteljauAt:(double)arg1 points:(struct CGPoint *)arg2;
@property(readonly, nonatomic) struct BCLineSegment lineSegment;
@property(readonly, nonatomic) BOOL isAPoint;
@property(readonly, nonatomic) BOOL looksLikeALine;
@property(readonly, nonatomic) double arcLength;
- (double)arcLengthWithSegments:(unsigned long long)arg1;
@property(readonly, nonatomic) double lineLength;
- (id)segmentMirroredAtOffset:(double)arg1;
- (id)segmentWithEndPoint2:(struct CGPoint)arg1;
- (id)segmentWithEndPoint1:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
@property(readonly, nonatomic) struct CGPoint endPoint2;
@property(readonly, nonatomic) struct CGPoint endPoint1;
@property(readonly, nonatomic) unsigned long long segmentType;
@property(readonly, nonatomic) struct BCBezierSegment segmentData;
- (id)init;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3;
- (id)initWithEndPoint1:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2;
- (id)initWithSegmentData:(struct BCBezierSegment)arg1;
- (id)segmentBySmoothingEndPoints:(double)arg1 decay:(double)arg2;

@end

