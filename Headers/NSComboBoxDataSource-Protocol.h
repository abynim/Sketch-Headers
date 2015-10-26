#import "NSObject.h"

@class NSComboBox, NSString;

@protocol NSComboBoxDataSource <NSObject>

@optional
- (NSString *)comboBox:(NSComboBox *)arg1 completedString:(NSString *)arg2;
- (unsigned long long)comboBox:(NSComboBox *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
- (id)comboBox:(NSComboBox *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(NSComboBox *)arg1;
@end

