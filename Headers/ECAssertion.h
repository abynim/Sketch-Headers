#import "NSObject.h"

@interface ECAssertion : NSObject
{
}

+ (id)assertObject:(id)arg1 isOfClass:(Class)arg2;
+ (void)failAssertion:(const char *)arg1;

@end

