#import "AFHTTPResponseSerializer.h"

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer
{
    BOOL _removesKeysWithNullValues;
    unsigned long long _readingOptions;
}

+ (id)serializerWithReadingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) BOOL removesKeysWithNullValues; // @synthesize removesKeysWithNullValues=_removesKeysWithNullValues;
@property(nonatomic) unsigned long long readingOptions; // @synthesize readingOptions=_readingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

