//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface FBBezierGraph : NSObject
{
    NSMutableArray *_contours;
    struct CGRect _bounds;
    BOOL _insertedSelfCrossings;
    struct CGPath *_CGPath;
}

+ (id)bezierGraph;
+ (id)bezierGraphWithContours:(id)arg1;
+ (id)bezierGraphWithBezierPath:(id)arg1;
+ (id)bezierGraphWithCGPath:(struct CGPath *)arg1;
@property(nonatomic) BOOL insertedSelfCrossings; // @synthesize insertedSelfCrossings=_insertedSelfCrossings;
@property(nonatomic) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
@property(readonly, nonatomic) NSArray *contours; // @synthesize contours=_contours;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)bezierGraphBySplittingSelfCrossingContours:(id)arg1;
- (id)bezierGraphByTrimmingSelfCrossingContours;
- (id)bezierGraphByMergingLinearRunsInContours;
- (id)contoursWithoutCrossings;
- (BOOL)contourHasCrossings:(id)arg1;
- (id)contourFromCurves:(id)arg1;
- (id)nextCrossingFromCrossing:(id)arg1 curves:(id *)arg2;
- (id)curveFromCrossing:(id)arg1 to:(id)arg2;
- (id)bezierGraphWithTransform:(struct CGAffineTransform)arg1;
- (id)description;
- (void)debugFindCurvesThatShouldIntersectWith:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)debuggingInsertIntersectionsWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForFillConversion;
- (void)debuggingInsertCrossingsWithBezierGraph:(id)arg1 markInside:(BOOL)arg2 markOtherInside:(BOOL)arg3;
- (void)debuggingInsertCrossingsForDifferenceWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForIntersectWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForUnionWithBezierGraph:(id)arg1;
- (id)nonselfIntersectingContours;
@property(readonly, nonatomic) NSArray *nonEmptyContours;
- (id)nonintersectingContours;
- (id)disjointContours;
- (void)addContour:(id)arg1;
- (void)removeOverlaps;
- (void)removeCrossings;
- (id)bezierGraphFromNonselfIntersections:(BOOL)arg1;
- (id)addReverseCurvesFromCrossing:(id)arg1 useNonself:(BOOL)arg2 toContour:(id)arg3;
- (id)addCurvesFromCrossing:(id)arg1 useNonself:(BOOL)arg2 toContour:(id)arg3;
- (id)firstUnprocessedCrossing:(BOOL)arg1;
- (void)markAllCrossingsAsUnprocessed;
- (void)removeCrossings:(id)arg1 forContours:(id)arg2;
- (void)removeContoursThatDontContain:(id)arg1;
- (void)removeContourCrossings:(id)arg1 thatDontAppearIn:(id)arg2;
- (id)contoursFromCrossings:(id)arg1;
- (BOOL)eliminateContainers:(id)arg1 thatDontContainContour:(id)arg2 usingRayWithVector:(id)arg3;
- (unsigned long long)numberOfTimesContour:(id)arg1 appearsInCrossings:(id)arg2;
- (BOOL)findCrossingsOnContainers:(id)arg1 onRay:(id)arg2 beforeMinimum:(struct CGPoint)arg3 afterMaximum:(struct CGPoint)arg4 crossingsBefore:(id)arg5 crossingsAfter:(id)arg6;
- (BOOL)findBoundsOfContour:(id)arg1 onRay:(id)arg2 minimum:(struct CGPoint *)arg3 maximum:(struct CGPoint *)arg4;
- (BOOL)containsContour:(id)arg1;
- (id)debugPathForJointsOfContour:(id)arg1;
- (id)debugPathForContainmentOfContour:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)debugPathForContainmentOfContour:(id)arg1;
- (id)closestCrossingToPoint:(struct CGPoint)arg1;
- (id)closestLocationToPoint:(struct CGPoint)arg1;
- (int)contourInsides:(id)arg1;
- (id)containmentResultForContour:(id)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)insertSelfCrossings;
- (void)insertContourSelfCrossings;
- (BOOL)isIntersection:(id)arg1 atJoinOfEdge:(id)arg2 andEdge:(id)arg3;
- (void)sortCoincidentCrossings;
- (void)removeDuplicateCrossings;
- (void)insertCrossingsAtOverlapMiddle;
- (void)removeCrossingsInOverlapsWithTypes:(unsigned long long)arg1;
- (void)removeCrossingsInNonCrossingOverlapRuns;
- (void)cleanupCrossingsWithBezierGraph:(id)arg1;
- (unsigned long long)insertCrossingsWithBezierGraph:(id)arg1 overlapRunCrossingTypes:(unsigned long long)arg2 crossingPosition:(unsigned long long)arg3;
- (unsigned long long)insertCrossingsWithBezierGraph:(id)arg1;
- (id)bezierPathWithClass:(Class)arg1;
- (id)bezierPath;
- (id)bezierGraphWithClockwiseFillsAnticlockwiseHoles;
- (id)noneWithBezierGraph:(id)arg1;
- (id)xorWithBezierGraph:(id)arg1;
- (void)markSelfCrossingsAsEntryOrExit;
- (void)markCrossingsAsEntryOrExitWithBezierGraph:(id)arg1 markInside:(BOOL)arg2;
- (void)differenceEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (id)differenceWithBezierGraph:(id)arg1;
- (void)intersectEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)intersectNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)intersectWithBezierGraph:(id)arg1;
- (void)unionEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)unionNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)unionWithBezierGraph:(id)arg1;
- (id)performOperationWithGraph:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (id)convertToEvenOddWindingRule;
- (id)convertToNoneZeroWindingRule;
- (id)contourByFollowingCrossingsFromEdge:(id)arg1 atOffset:(double)arg2;
- (id)contourByFollowingUnprocessedCrossingsFromCrossing:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBezierPath:(id)arg1 orCGPath:(struct CGPath *)arg2;
- (id)initWithBezierPath:(id)arg1;
- (id)initWithCGPath:(struct CGPath *)arg1;

@end

