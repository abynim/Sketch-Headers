//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKShareUploadDataSource.h"

@class MSWebExporter, NSProgress, NSString, NSURL, SCKShare, SCKShareUploadOperation;

@interface MSCloudShareUploadController : NSObject <SCKShareUploadDataSource>
{
    BOOL _cancelled;
    id <MSCloudShareUploadControllerDelegate> _delegate;
    SCKShare *_existingShare;
    id <MSCloudExportableDocument> _document;
    NSURL *_localURL;
    NSString *_name;
    MSWebExporter *_webExporter;
    SCKShareUploadOperation *_operation;
}

@property(retain, nonatomic) SCKShareUploadOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) MSWebExporter *webExporter; // @synthesize webExporter=_webExporter;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(nonatomic) __weak id <MSCloudExportableDocument> document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) SCKShare *existingShare; // @synthesize existingShare=_existingShare;
@property(nonatomic) __weak id <MSCloudShareUploadControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)documentFileURLForShareUploadOperation:(id)arg1;
- (id)shareUploadOperation:(id)arg1 fileURLForItemWithHash:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel;
- (id)loadManifest;
- (void)uploadManifest;
- (void)startUpload;
@property(readonly, nonatomic) NSProgress *progress;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

