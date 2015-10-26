#import "NSObject.h"

@class FBBezierContour, NSMutableArray;

@interface FBContourOverlap : NSObject
{
    NSMutableArray *_runs;
}

+ (id)contourOverlap;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isBetweenContour:(id)arg1 andContour:(id)arg2;
@property(readonly, nonatomic) FBBezierContour *contour2;
@property(readonly, nonatomic) FBBezierContour *contour1;
- (BOOL)isEmpty;
- (BOOL)isComplete;
- (void)reset;
- (void)runsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2;
- (BOOL)doesContainCrossing:(id)arg1;
- (void)addOverlap:(id)arg1 forEdge1:(id)arg2 edge2:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *runs_;

@end

