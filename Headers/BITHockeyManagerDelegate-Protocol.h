#import "BITCrashManagerDelegate.h"
#import "NSObject.h"

@class BITHockeyBaseManager, BITHockeyManager, NSString;

@protocol BITHockeyManagerDelegate <NSObject, BITCrashManagerDelegate>

@optional
- (NSString *)userEmailForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userNameForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userIDForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
@end

