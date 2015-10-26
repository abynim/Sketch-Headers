#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSURLRequest;

@protocol AFURLRequestSerialization <NSObject, NSSecureCoding, NSCopying>
- (NSURLRequest *)requestBySerializingRequest:(NSURLRequest *)arg1 withParameters:(id)arg2 error:(id *)arg3;
@end

