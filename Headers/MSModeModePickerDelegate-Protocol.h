#import "NSObject.h"

@class MSModePickerView, NSString;

@protocol MSModeModePickerDelegate <NSObject>
- (NSString *)pickerView:(MSModePickerView *)arg1 labelForMode:(long long)arg2;
- (void)pickerViewChanged:(MSModePickerView *)arg1;
@end

