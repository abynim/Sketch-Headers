#import "NSObject.h"

@class AFHTTPRequestOperationManager, BCTaskManager, NSURL;

@interface BCEmbeddedServerController : NSObject
{
    BOOL _isRunning;
    NSURL *_temporaryFolder;
    AFHTTPRequestOperationManager *_manager;
    BCTaskManager *_serverTaskManager;
    NSURL *_publicBaseURL;
}

@property(retain, nonatomic) NSURL *publicBaseURL; // @synthesize publicBaseURL=_publicBaseURL;
@property(retain, nonatomic) BCTaskManager *serverTaskManager; // @synthesize serverTaskManager=_serverTaskManager;
@property(retain, nonatomic) AFHTTPRequestOperationManager *manager; // @synthesize manager=_manager;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSURL *temporaryFolder; // @synthesize temporaryFolder=_temporaryFolder;
- (void).cxx_destruct;
- (void)serverDidStartAtURL:(id)arg1;
- (void)runEndpoint:(id)arg1 withPayload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)reloadBrowser;
- (void)unmount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

