#import "NSObject.h"

@class NSError, NSURLAuthenticationChallenge, NSURLSession;

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

