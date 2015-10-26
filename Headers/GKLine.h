#import "NSObject.h"

@class GKAxis;

@interface GKLine : NSObject
{
    GKAxis *_axis;
    double _position;
}

+ (id)sortLines:(id)arg1 byDistanceToValue:(double)arg2;
+ (id)lineOnAxis:(id)arg1 position:(double)arg2;
@property(nonatomic) double position; // @synthesize position=_position;
@property(copy, nonatomic) GKAxis *axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (BOOL)snapToPosition:(double)arg1 margin:(double)arg2;
- (BOOL)snapToRect:(id)arg1 margin:(double)arg2;

@end

