//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSAssetLibrary, MSAssetLibraryController, MSDocumentData, MSModelObject, NSArray;

@protocol MSForeignObjectProvider
@property(readonly, nonatomic) unsigned long long objectType;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;
@property(readonly, nonatomic) MSDocumentData *currentDocument;
@property(readonly, nonatomic) NSArray *foreignObjects;
- (BOOL)masterIsOutOfSyncWithInstance:(MSModelObject *)arg1;
- (struct MSModelObject *)masterObjectForInstance:(MSModelObject *)arg1;
- (BOOL)currentDocumentIsLibrary:(MSAssetLibrary *)arg1;
- (NSArray *)localObjectsForDocument:(MSDocumentData *)arg1;
@end

