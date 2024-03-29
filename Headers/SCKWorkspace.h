//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

#import <SketchCloudKit/SCKContentOwner-Protocol.h>

@class NSDate, NSDictionary, NSString, SCKAvatar, SCKPaginatedProjects, SCKPaginatedShares;

@interface SCKWorkspace : SCKObject <SCKContentOwner>
{
    BOOL _canEdit;
    BOOL _hasEditableContent;
    BOOL _isActive;
    BOOL _ssoEnabled;
    BOOL _isSubscriptionSetUp;
    BOOL _userIsOwner;
    SCKAvatar *_avatar;
    SCKPaginatedProjects *_paginatedProjects;
    SCKPaginatedShares *_paginatedShares;
    SCKPaginatedShares *_paginatedTrashedShares;
    NSString *_name;
    NSString *_role;
    NSString *_ssoShortName;
    NSString *_customerID;
    NSString *_billingStatus;
    NSDate *_subscriptionEndDate;
    NSDate *_trialEndDate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL userIsOwner; // @synthesize userIsOwner=_userIsOwner;
@property(readonly, copy, nonatomic) NSDate *trialEndDate; // @synthesize trialEndDate=_trialEndDate;
@property(readonly, copy, nonatomic) NSDate *subscriptionEndDate; // @synthesize subscriptionEndDate=_subscriptionEndDate;
@property(readonly, nonatomic) BOOL isSubscriptionSetUp; // @synthesize isSubscriptionSetUp=_isSubscriptionSetUp;
@property(readonly, copy, nonatomic) NSString *billingStatus; // @synthesize billingStatus=_billingStatus;
@property(readonly, copy, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
@property(readonly, copy, nonatomic) NSString *ssoShortName; // @synthesize ssoShortName=_ssoShortName;
@property(readonly, nonatomic) BOOL ssoEnabled; // @synthesize ssoEnabled=_ssoEnabled;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) BOOL hasEditableContent; // @synthesize hasEditableContent=_hasEditableContent;
@property(readonly, nonatomic) BOOL canEdit; // @synthesize canEdit=_canEdit;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) SCKPaginatedShares *paginatedTrashedShares; // @synthesize paginatedTrashedShares=_paginatedTrashedShares;
@property(readonly, nonatomic) SCKPaginatedShares *paginatedShares; // @synthesize paginatedShares=_paginatedShares;
@property(readonly, nonatomic) SCKPaginatedProjects *paginatedProjects; // @synthesize paginatedProjects=_paginatedProjects;
@property(readonly, nonatomic) SCKAvatar *avatar; // @synthesize avatar=_avatar;
@property(readonly, nonatomic) BOOL ssoAuthenticationRequired;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL disclosesSensitiveMetadata;
@property(readonly, nonatomic) NSDictionary *disclosableDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

