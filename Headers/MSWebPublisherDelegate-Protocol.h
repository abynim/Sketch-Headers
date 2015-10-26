#import "NSObject.h"

@class MSWebPublisher, NSError, NSURL;

@protocol MSWebPublisherDelegate <NSObject>
- (void)publisher:(MSWebPublisher *)arg1 uploadDidCancelWithError:(NSError *)arg2;
- (void)publisher:(MSWebPublisher *)arg1 uploadDidFailWithError:(NSError *)arg2;
- (void)publisher:(MSWebPublisher *)arg1 uploadDidFinishUploadingToURL:(NSURL *)arg2;
- (void)publisher:(MSWebPublisher *)arg1 uploadDidProgressTo:(double)arg2;
- (void)publisherWillStartUploading:(MSWebPublisher *)arg1;
@end

