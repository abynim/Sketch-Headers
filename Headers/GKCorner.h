#import "GKObjectEnum.h"

@interface GKCorner : GKObjectEnum
{
}

+ (id)cornersSatisfyingMask:(unsigned long long)arg1;
+ (id)cornersSatisfyingPredicate:(CDUnknownBlockType)arg1;
+ (id)allCorners;
+ (id)firstCornerSatisfyingPredicate:(CDUnknownBlockType)arg1;
+ (void)enumerateCornersInBlock:(CDUnknownBlockType)arg1;
+ (id)cornerWithType:(long long)arg1;
- (unsigned long long)rectEdgesMask;
- (id)stringRepresentation;
- (BOOL)satisfiesMask:(unsigned long long)arg1;
- (unsigned long long)maskValue;
- (BOOL)isInMidVertical;
- (BOOL)isInMidHorizontal;
- (BOOL)isInMid;
- (BOOL)isInCorner;
- (id)flipByAxisMask:(unsigned long long)arg1;
- (id)cornerByRotatingByDegrees:(long long)arg1;
- (id)cornerByRotating45DegreesCounterClockwise;
- (id)cornerByFlipping;
- (id)flip;

// Remaining properties
@property(nonatomic) long long type; // @dynamic type;

@end

