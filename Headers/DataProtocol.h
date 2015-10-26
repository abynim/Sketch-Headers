#import "NSURLProtocol.h"

@interface DataProtocol : NSURLProtocol
{
}

+ (id)dataFromLink:(id)arg1 type:(id *)arg2 encoding:(id *)arg3;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end

