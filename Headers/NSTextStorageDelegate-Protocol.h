#import "NSObject.h"

@class NSNotification;

@protocol NSTextStorageDelegate <NSObject>

@optional
- (void)textStorageDidProcessEditing:(NSNotification *)arg1;
- (void)textStorageWillProcessEditing:(NSNotification *)arg1;
@end

