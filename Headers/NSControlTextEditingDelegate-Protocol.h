#import "NSObject.h"

@class NSArray, NSControl, NSString, NSText, NSTextView;

@protocol NSControlTextEditingDelegate <NSObject>

@optional
- (NSArray *)control:(NSControl *)arg1 textView:(NSTextView *)arg2 completions:(NSArray *)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(NSControl *)arg1 textView:(NSTextView *)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(NSControl *)arg1 isValidObject:(id)arg2;
- (void)control:(NSControl *)arg1 didFailToValidatePartialString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 didFailToFormatString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 textShouldEndEditing:(NSText *)arg2;
- (BOOL)control:(NSControl *)arg1 textShouldBeginEditing:(NSText *)arg2;
@end

