#import "NSObject.h"

@interface MSNetworkHelper : NSObject
{
}

+ (id)currentIPv4Address;
+ (id)currentSubnet;
+ (BOOL)isValidIPWithPort:(id)arg1;
+ (BOOL)isValidIP:(id)arg1;

@end

