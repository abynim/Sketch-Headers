#import "NSObject.h"

@class ECLogManager;

@protocol ECLogManagerDelegate <NSObject>

@optional
- (void)logManagerWillShutdown:(ECLogManager *)arg1;
- (void)logManagerDidStartup:(ECLogManager *)arg1;
@end

