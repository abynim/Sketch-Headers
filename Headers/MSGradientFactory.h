#import "MSFactory.h"

@class NSArray;

@interface MSGradientFactory : MSFactory
{
}

+ (id)filename;
- (void)addGradient:(id)arg1;
@property(readonly, nonatomic) __weak NSArray *gradients; // @dynamic gradients;

@end

