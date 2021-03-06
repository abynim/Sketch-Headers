//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

#import <SketchCloudKit/SCKDiffable-Protocol.h>

@class NSArray, NSString, SCKDocument;

@interface SCKPage : SCKObject <SCKDiffable>
{
    NSString *_name;
    NSString *_slug;
    unsigned long long _order;
    NSArray *_artboards;
    NSString *_presentationFileName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *presentationFileName; // @synthesize presentationFileName=_presentationFileName;
@property(readonly, nonatomic) NSArray *artboards; // @synthesize artboards=_artboards;
@property(readonly, nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) SCKDocument *document;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)diffComparedTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

