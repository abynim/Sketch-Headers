#import "AFHTTPResponseSerializer.h"

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer
{
    unsigned long long _format;
    unsigned long long _readOptions;
}

+ (id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2;
+ (id)serializer;
@property(nonatomic) unsigned long long readOptions; // @synthesize readOptions=_readOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

