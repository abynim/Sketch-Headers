#import "BCNetworkService.h"

@class NSArray, NSString;

@interface BCDirectIPService : BCNetworkService
{
    int _port;
    NSString *_ipAddress;
    NSArray *_addresses;
}

@property(retain, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (void)createAddresses;
- (void)startService;
- (void)stopService;
- (id)name;
- (id)initWithIP:(id)arg1 port:(int)arg2;

@end

