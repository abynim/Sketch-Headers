//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSPatch, NSArray, NSMutableArray, NSSet, NSString;

@interface MSMoment : NSObject
{
    BOOL _committed;
    MSImmutableDocumentData *_initialDocument;
    double _timestamp;
    NSString *_title;
    NSMutableArray *_supplementalActions;
    MSPatch *_forwardPatch;
    MSPatch *_revertPatch;
    NSString *_pageID;
    NSSet *_selection;
    NSArray *_selectedOverrides;
    MSImmutableDocumentData *_finalDocument;
}

+ (void)setTimestampCoalescingThreshold:(double)arg1;
+ (double)timestampCoalescingThreshold;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSImmutableDocumentData *finalDocument; // @synthesize finalDocument=_finalDocument;
@property(readonly, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
@property(readonly, nonatomic) NSSet *selection; // @synthesize selection=_selection;
@property(readonly, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) MSPatch *revertPatch; // @synthesize revertPatch=_revertPatch;
@property(retain, nonatomic) MSPatch *forwardPatch; // @synthesize forwardPatch=_forwardPatch;
@property(readonly, nonatomic) BOOL committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) NSMutableArray *supplementalActions; // @synthesize supplementalActions=_supplementalActions;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) MSImmutableDocumentData *initialDocument; // @synthesize initialDocument=_initialDocument;
- (void)updateInitialDocument:(id)arg1;
- (void)updateFinalDocument:(id)arg1;
- (void)amendLocalChangeFrom:(id)arg1 toCurrentDocument:(id)arg2;
- (void)applyTo:(id)arg1 postUpdateBlock:(CDUnknownBlockType)arg2;
- (void)updatePageID;
- (void)commit:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canCoalesce;
@property(readonly, nonatomic) BOOL hasCoalescePeriodExpired;
- (void)performSupplementalActions;
- (id)initWithInitialDocument:(id)arg1 finalDocument:(id)arg2 patch:(id)arg3;

@end

