//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKEvent.h>

@class SCKObject, SCKShare;

@interface SCKVersionDeletedEvent : SCKEvent
{
    SCKShare *_share;
    SCKObject *_versionDeleted;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCKObject *versionDeleted; // @synthesize versionDeleted=_versionDeleted;
@property(readonly, nonatomic) SCKShare *share; // @synthesize share=_share;
- (id)initWithDictionary:(id)arg1;

@end

