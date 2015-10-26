#import "NSObject.h"

@class BITCrashManager, NSError, NSString;

@protocol BITCrashManagerDelegate <NSObject>

@optional
- (void)crashManagerDidFinishSendingCrashReport:(BITCrashManager *)arg1;
- (void)crashManager:(BITCrashManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)crashManagerWillSendCrashReport:(BITCrashManager *)arg1;
- (void)crashManagerWillCancelSendingCrashReport:(BITCrashManager *)arg1;
- (void)crashManagerWillShowSubmitCrashReportAlert:(BITCrashManager *)arg1;
- (NSString *)applicationLogForCrashManager:(BITCrashManager *)arg1;
- (void)showMainApplicationWindowForCrashManager:(BITCrashManager *)arg1;
@end

