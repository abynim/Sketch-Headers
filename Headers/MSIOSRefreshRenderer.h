#import "NSObject.h"

@class NSOperationQueue;

@interface MSIOSRefreshRenderer : NSObject
{
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)scheduleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scheduleRenderingOfRect:(struct CGRect)arg1 forArtboard:(id)arg2;
- (id)init;

@end

