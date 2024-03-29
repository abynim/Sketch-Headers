//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSArray, NSURL;

@interface SCKFile : SCKObject
{
    unsigned long long _fileSize;
    double _scale;
    NSArray *_thumbnails;
    NSURL *_url;
    unsigned long long _type;
    struct CGSize _dimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

