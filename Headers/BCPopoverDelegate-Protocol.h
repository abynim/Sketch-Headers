#import "NSObject.h"

@class BCPopover;

@protocol BCPopoverDelegate <NSObject>
- (void)popoverWillClose:(BCPopover *)arg1;

@optional
- (BOOL)popoverShouldCauseExistingPopoversToClose:(BCPopover *)arg1;
- (BOOL)popoverShouldCloseWhenNewPopoverOpens:(BCPopover *)arg1 newPopover:(BCPopover *)arg2;
- (void)popoverWindowDidMove:(BCPopover *)arg1;
- (void)popoverWindowSizeDidChange:(BCPopover *)arg1;
@end

