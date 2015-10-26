#import "NSObject.h"

#import "NSCopying.h"

@interface GKPoint : NSObject <NSCopying>
{
    struct CGPoint _point;
}

+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)description;
- (void)setPosition:(double)arg1 forAxis:(id)arg2;
- (double)positionForAxis:(id)arg1;
- (id)snapToLines:(id)arg1 withMargin:(double)arg2;
- (id)snapToPoint:(id)arg1 withMargin:(double)arg2;
- (id)snapToRect:(id)arg1 withMargin:(double)arg2;
- (id)offsetToPoint:(id)arg1;
- (double)distanceToPoint:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double y; // @dynamic y;
@property(nonatomic) double x; // @dynamic x;
- (id)initWithPoint:(struct CGPoint)arg1;

@end

