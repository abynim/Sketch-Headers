//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKPublicUser.h>

#import <SketchCloudKit/SCKContentOwner-Protocol.h>

@class NSArray, NSDictionary, NSString, SCKAvatar, SCKPaginatedProjects, SCKPaginatedShares, SCKWorkspace;

@interface SCKUser : SCKPublicUser <SCKContentOwner>
{
    BOOL _hasPersonalIdentity;
    NSString *_email;
    SCKWorkspace *_personalWorkspace;
    NSArray *_workspaces;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *workspaces; // @synthesize workspaces=_workspaces;
@property(readonly, nonatomic) SCKWorkspace *personalWorkspace; // @synthesize personalWorkspace=_personalWorkspace;
@property(readonly, nonatomic) BOOL hasPersonalIdentity; // @synthesize hasPersonalIdentity=_hasPersonalIdentity;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *editableWorkspaces;
@property(readonly, nonatomic) SCKPaginatedProjects *paginatedProjects;
@property(readonly, nonatomic) SCKPaginatedShares *paginatedShares;
@property(readonly, nonatomic) BOOL disclosesSensitiveMetadata;
- (id)dictionaryRepresentation;
- (id)initWithUser:(id)arg1 updatedWorkspaces:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SCKAvatar *avatar;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *disclosableDictionaryRepresentation;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

