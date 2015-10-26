#import "NSObject.h"

@class MSLayerGroup, MSLayerSnapperData;

@interface MSLayerSnapperDrawing : NSObject
{
    MSLayerSnapperData *_snapperData;
    double _zoomValue;
    MSLayerGroup *_group;
}

+ (void)drawSnapsForData:(id)arg1 zoomValue:(double)arg2 group:(id)arg3;
@property(retain, nonatomic) MSLayerGroup *group; // @synthesize group=_group;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSLayerSnapperData *snapperData; // @synthesize snapperData=_snapperData;
- (void).cxx_destruct;
- (void)drawSnapLines;
- (void)drawSnapDistances;
- (struct CGAffineTransform)rotateFlipTransformForLayer:(id)arg1;
- (void)drawSnapLayerWidths;
- (void)drawSnaps;

@end

