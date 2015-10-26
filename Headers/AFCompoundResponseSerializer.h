#import "AFHTTPResponseSerializer.h"

@class NSArray;

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer
{
    NSArray *_responseSerializers;
}

+ (id)compoundSerializerWithResponseSerializers:(id)arg1;
@property(copy, nonatomic) NSArray *responseSerializers; // @synthesize responseSerializers=_responseSerializers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end

