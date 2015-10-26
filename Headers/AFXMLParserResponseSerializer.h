#import "AFHTTPResponseSerializer.h"

@interface AFXMLParserResponseSerializer : AFHTTPResponseSerializer
{
}

+ (id)serializer;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

