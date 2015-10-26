#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class MSDocumentData, NSString, NSURL, NSURLSession, NSURLSessionDataTask;

@interface MSWebPublisher : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    id <MSWebPublisherDelegate> _delegate;
    NSURL *_localURL;
    MSDocumentData *_documentData;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_task;
}

@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(nonatomic) __weak id <MSWebPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)URLRequestForPostToURL:(id)arg1 data:(id)arg2 projectName:(id)arg3 fileName:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)parseAPIAnswer:(id)arg1 error:(id *)arg2;
- (void)uploadData:(id)arg1 projectName:(id)arg2;
- (void)removeWorkspace;
- (id)zippedData;
- (void)cancelUpload;
- (void)uploadDocumentWithName:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

