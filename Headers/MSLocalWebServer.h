#import "NSObject.h"

@class BCEmbeddedServerController, NSMutableArray, NSURL;

@interface MSLocalWebServer : NSObject
{
    BCEmbeddedServerController *_server;
    NSURL *_cacheRoot;
    NSURL *_documentsFolder;
    NSMutableArray *_mountedDocuments;
}

@property(retain, nonatomic) NSMutableArray *mountedDocuments; // @synthesize mountedDocuments=_mountedDocuments;
@property(copy, nonatomic) NSURL *documentsFolder; // @synthesize documentsFolder=_documentsFolder;
@property(copy, nonatomic) NSURL *cacheRoot; // @synthesize cacheRoot=_cacheRoot;
@property(retain, nonatomic) BCEmbeddedServerController *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)registerDocument:(id)arg1 locationOnDisk:(id)arg2 publicURL:(id)arg3 exporter:(id)arg4;
- (id)mountInfoForDocument:(id)arg1;
- (id)URLForDocument:(id)arg1;
- (BOOL)isDocumentPublished:(id)arg1;
- (void)refreshLoop;
- (void)startRefreshingLoop;
- (void)unpublishDocumentInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unpublishDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)doPublishDocument:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)publishDocument:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)togglePublishDocument:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

