#import "NSObject.h"

#import "MSWebPublisherDelegate.h"

@class MSWebPublisher, NSString;

@interface MSWebPublisherBlockWrapper : NSObject <MSWebPublisherDelegate>
{
    MSWebPublisher *_publisher;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSWebPublisher *publisher; // @synthesize publisher=_publisher;
- (void).cxx_destruct;
- (void)publisher:(id)arg1 uploadDidCancelWithError:(id)arg2;
- (void)publisher:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)publisher:(id)arg1 uploadDidProgressTo:(double)arg2;
- (void)publisher:(id)arg1 uploadDidFinishUploadingToURL:(id)arg2;
- (void)publisherWillStartUploading:(id)arg1;
- (void)uploadData:(id)arg1 projectName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

