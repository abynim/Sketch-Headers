#import "GKObjectEnum.h"

@interface GKAxis : GKObjectEnum
{
}

+ (id)axisWithType:(long long)arg1;
+ (id)verticalAxis;
+ (id)horizontalAxis;
- (id)flippedAxis;
- (void)flip;
- (BOOL)isVertical;
- (BOOL)isHorizontal;

// Remaining properties
@property(nonatomic) long long type; // @dynamic type;

@end

