#import "NSObject.h"

@interface BCLineObject : NSObject
{
    unsigned long long _axis;
    double _position;
}

+ (id)lineOnAxis:(unsigned long long)arg1 position:(double)arg2;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;

@end

