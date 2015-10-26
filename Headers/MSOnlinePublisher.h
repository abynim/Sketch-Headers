#import "NSObject.h"

@class MSDocumentData, NSArray, NSMutableDictionary, NSURL, NSURLSession;

@interface MSOnlinePublisher : NSObject
{
    NSArray *_pages;
    NSURL *_workspaceURL;
    NSMutableDictionary *_documentInfo;
    MSDocumentData *_documentData;
    NSURLSession *_urlSession;
}

@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) NSMutableDictionary *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(retain, nonatomic) NSURL *workspaceURL; // @synthesize workspaceURL=_workspaceURL;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (id)URLRequestForPostToURL:(id)arg1 data:(id)arg2 parameters:(id)arg3 fileName:(id)arg4;
- (void)validateAPIAnswer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)uploadData:(id)arg1 projectName:(id)arg2 accessCode:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)metaData;
- (id)exportArtboard:(id)arg1;
- (id)exportPage:(id)arg1;
- (BOOL)saveManifestFileWithError:(id *)arg1;
- (id)zippedData;
- (BOOL)saveCopyOfDocumentWithError:(id *)arg1;
- (void)removeWorkspace;
- (void)generateDataWithDocumentName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithPages:(id)arg1;

@end

