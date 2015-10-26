#import "NSObject.h"

@interface BCNetworkService : NSObject
{
    id <BCNetworkServiceDelegate> _delegate;
}

@property(retain, nonatomic) id <BCNetworkServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addresses;
- (void)startService;
- (void)stopService;
- (id)name;

@end

