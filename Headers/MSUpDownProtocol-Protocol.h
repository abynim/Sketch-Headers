#import "NSObject.h"

@class MSUpDownController;

@protocol MSUpDownProtocol <NSObject>
@property(readonly, nonatomic) MSUpDownController *upDownController;
- (double)incrementValue;
@end

