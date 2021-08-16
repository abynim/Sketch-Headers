//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKDocument.h>

#import <SketchCloudKit/SCKDiffable-Protocol.h>

@class NSString, NSURL;

@interface SCKCloudDocument : SCKDocument <SCKDiffable>
{
    BOOL _isProcessing;
    NSString *_slug;
    NSURL *_downloadURL;
    unsigned long long _fileSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) BOOL isProcessing; // @synthesize isProcessing=_isProcessing;
@property(readonly, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) NSString *slug; // @synthesize slug=_slug;
- (id)dictionaryRepresentation;
- (id)name;
- (id)initWithDictionary:(id)arg1 parentObject:(id)arg2;
- (id)diffComparedTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

