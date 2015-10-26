#import "NSObject.h"

@class NSString, NSUUID;

@protocol BCNetworkServiceDelegate <NSObject>
- (void)startConnecting;
- (void)setModel:(NSString *)arg1;
- (void)setIdiom:(NSString *)arg1;
- (void)setSystemVersion:(NSString *)arg1;
- (void)setSystemName:(NSString *)arg1;
- (void)setUuid:(NSUUID *)arg1;
- (BOOL)connected;
- (void)setRemoteState:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
@end

