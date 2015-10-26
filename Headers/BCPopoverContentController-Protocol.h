#import "NSObject.h"

@class BCPopover;

@protocol BCPopoverContentController <NSObject>

@optional
- (void)popoverWindowDidShow:(BCPopover *)arg1;
@end

