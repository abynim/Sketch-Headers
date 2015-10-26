#import "GKObjectEnum.h"

@interface GKAxisPosition : GKObjectEnum
{
}

+ (id)positionWithType:(long long)arg1;
+ (id)positionMax;
+ (id)positionMid;
+ (id)positionMin;

// Remaining properties
@property(nonatomic) long long type; // @dynamic type;

@end

