//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s14SketchCloudKit14UserControllerCN.h"

@class NSString, SCKWorkspace;

@interface _$s14SketchCloudKit14UserControllerCN (Sketch)
+ (BOOL)supportsPersonalContributors;
- (void)configureWorkspaceButton:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)selectWorkspace:(id)arg1;
- (id)workspaceMenuWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic, copy) NSString *defaultProjectID;
@property(nonatomic, retain) SCKWorkspace *defaultWorkspace;
- (BOOL)canViewContentsOfWorkspace:(id)arg1;
- (BOOL)canEditContentsOfWorkspace:(id)arg1;
@property(nonatomic, readonly) BOOL isPersonalEditor;
@property(nonatomic, readonly) BOOL hasPersonalWorkspace;
@property(nonatomic, readonly) BOOL hasMacAccess;
@property(nonatomic, readonly) BOOL isWorkspaceEditor;
@property(nonatomic, readonly) BOOL isEditor;
@end

