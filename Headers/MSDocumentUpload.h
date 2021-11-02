//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedEditing/NSURLSessionTaskDelegate-Protocol.h>

@class NSProgress, NSString, NSURL, SCKShare;
@protocol MSDocumentUploadDelegate;

@interface MSDocumentUpload : NSObject <NSURLSessionTaskDelegate>
{
    // Error parsing type: , name: documentData
    // Error parsing type: , name: authentication
    // Error parsing type: , name: environment
    // Error parsing type: , name: fileURL
    // Error parsing type: , name: documentName
    // Error parsing type: , name: delegate
    // Error parsing type: , name: createdShare
    // Error parsing type: , name: isLibrary
    // Error parsing type: , name: cancelled
    // Error parsing type: , name: finalized
    // Error parsing type: , name: progress
    // Error parsing type: , name: progressObserver
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: documentID
    // Error parsing type: , name: configuration
    // Error parsing type: , name: $__lazy_storage_$_urlSession
}

+ (id)didProcessNotificationUserInfoKey;
+ (id)cloudSubscriptionNotification;
+ (void)setSubscriptionsController:(id)arg1;
+ (id)subscriptionsController;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cancel;
- (void)startUpload;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 owner:(id)arg2 project:(id)arg3 resolveProjectFromShare:(BOOL)arg4 error:(id *)arg5;
- (id)initForCoEditingWithDocumentData:(id)arg1 name:(id)arg2 owner:(id)arg3 project:(id)arg4;
@property(nonatomic, readonly) NSProgress *progress; // @synthesize progress;
@property(nonatomic) BOOL finalized; // @synthesize finalized;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled;
@property(nonatomic) BOOL isLibrary; // @synthesize isLibrary;
@property(nonatomic, retain) SCKShare *createdShare; // @synthesize createdShare;
@property(nonatomic) __weak id <MSDocumentUploadDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) NSString *documentName;
@property(nonatomic, copy) NSURL *fileURL;

@end

