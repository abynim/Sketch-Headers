#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSData, NSURLResponse;

@protocol AFURLResponseSerialization <NSObject, NSSecureCoding, NSCopying>
- (id)responseObjectForResponse:(NSURLResponse *)arg1 data:(NSData *)arg2 error:(id *)arg3;
@end

