//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SharedEditing/MSDocumentUpload.h>

@class SCKObject, SCKProject, SCKShare;
@protocol SCKContentOwner;

@interface MSDocumentUpload (SharedEditing)
@property(nonatomic, readonly) SCKProject *project;
@property(nonatomic, readonly) SCKObject<SCKContentOwner> *owner;
@property(nonatomic, readonly) SCKShare *existingShare;
@end
