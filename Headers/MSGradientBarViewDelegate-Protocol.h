#import "NSObject.h"

@class MSGradientBarView;

@protocol MSGradientBarViewDelegate <NSObject>
- (void)gradientBarChanged:(MSGradientBarView *)arg1;
@end

