#import "NSObject.h"

@class FBBezierContour, FBBezierCurve, FBBezierGraph;

@interface FBCurveLocation : NSObject
{
    FBBezierGraph *_graph;
    FBBezierContour *_contour;
    FBBezierCurve *_edge;
    double _parameter;
    double _distance;
}

+ (id)curveLocationWithEdge:(id)arg1 parameter:(double)arg2 distance:(double)arg3;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) FBBezierCurve *edge; // @synthesize edge=_edge;
@property(retain, nonatomic) FBBezierContour *contour; // @synthesize contour=_contour;
@property(retain, nonatomic) FBBezierGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)initWithEdge:(id)arg1 parameter:(double)arg2 distance:(double)arg3;

@end

