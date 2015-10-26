#import "AFHTTPResponseSerializer.h"

@interface AFXMLDocumentResponseSerializer : AFHTTPResponseSerializer
{
    unsigned long long _options;
}

+ (id)serializerWithXMLDocumentOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

