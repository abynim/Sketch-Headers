#import "NSObject.h"

@class NSNotification, NSText;

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
@end

