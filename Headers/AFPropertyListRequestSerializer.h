#import "AFHTTPRequestSerializer.h"

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer
{
    unsigned long long _format;
    unsigned long long _writeOptions;
}

+ (id)serializerWithFormat:(unsigned long long)arg1 writeOptions:(unsigned long long)arg2;
+ (id)serializer;
@property(nonatomic) unsigned long long writeOptions; // @synthesize writeOptions=_writeOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end

