//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSArray, NSString, SCKCloudDocument, SCKPublicUser, SCKShare;

@interface SCKShareVersion : SCKObject
{
    NSString *_shortId;
    SCKPublicUser *_creator;
    SCKCloudDocument *_document;
    NSArray *_previewThumbnails;
    NSArray *_previewFiles;
    SCKShare *_share;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCKShare *share; // @synthesize share=_share;
@property(readonly, nonatomic) NSArray *previewFiles; // @synthesize previewFiles=_previewFiles;
@property(readonly, nonatomic) NSArray *previewThumbnails; // @synthesize previewThumbnails=_previewThumbnails;
@property(readonly, nonatomic) SCKCloudDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) SCKPublicUser *creator; // @synthesize creator=_creator;
@property(readonly, nonatomic) NSString *shortId; // @synthesize shortId=_shortId;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

