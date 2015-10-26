#import "GKObjectEnum.h"

@interface GKEdge : GKObjectEnum
{
}

+ (id)edgeWithType:(unsigned long long)arg1;
- (void)flip;

// Remaining properties
@property(nonatomic) unsigned long long type; // @dynamic type;

@end

