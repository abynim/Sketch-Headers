//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSDocumentOpener-Protocol.h>

@class MSDocumentData, NSDictionary, NSURL;
@protocol MSDocumentOpenerDelegate;

@interface MSStandardDocumentOpener : NSObject <MSDocumentOpener>
{
    unsigned long long _status;
    NSURL *_documentURL;
    id <MSDocumentOpenerDelegate> _delegate;
    MSDocumentData *_documentData;
    NSDictionary *_UIMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *UIMetadata; // @synthesize UIMetadata=_UIMetadata;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(nonatomic) __weak id <MSDocumentOpenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (BOOL)handleNewerDocument:(id)arg1 error:(id *)arg2;
- (void)migrateUIMetadataWithDocumentData;
- (BOOL)readFromDocumentWrapper:(id)arg1 corruptionDetected:(char *)arg2 error:(id *)arg3;
- (BOOL)validateDocument:(id)arg1 error:(id *)arg2;
- (BOOL)open:(id *)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)init;
- (id)initWithData:(id)arg1 uiMetadata:(id)arg2 fileURL:(id)arg3 delegate:(id)arg4;

@end

