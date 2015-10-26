#import "NSObject.h"

@class MSPublisherViewController;

@protocol MSPublisherViewControllerDelegate <NSObject>
- (void)publishViewController:(MSPublisherViewController *)arg1 localServerIsPublished:(BOOL)arg2;
- (void)publishViewController:(MSPublisherViewController *)arg1 didProgressUpdateTo:(double)arg2;
@end

