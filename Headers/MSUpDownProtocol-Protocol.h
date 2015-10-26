#import "NSObject.h"

@class MSUpDownController, NSNumber;

@protocol MSUpDownProtocol <NSObject>
@property(readonly, nonatomic) MSUpDownController *upDownController;
- (NSNumber *)maximum;
- (NSNumber *)minimum;
- (double)incrementValue;
@end

