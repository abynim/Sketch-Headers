//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSString, NSURL;

@interface SCKThumbnail : SCKObject
{
    NSURL *_URL;
    NSString *_size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

