//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSString, NSURL, SCKProject, SCKShare, SCKShareUploadOperation;

@protocol SCKShareUploadDataSource <NSObject>
- (SCKProject *)projectForShareUploadOperation:(SCKShareUploadOperation *)arg1;
- (void)shareUploadOperation:(SCKShareUploadOperation *)arg1 exportDocumentWithHandler:(void (^)(NSURL *))arg2;
- (void)shareUploadOperation:(SCKShareUploadOperation *)arg1 willStartUploadingShare:(SCKShare *)arg2;
- (NSURL *)shareUploadOperation:(SCKShareUploadOperation *)arg1 fileURLForItemWithHash:(NSString *)arg2;
@end

