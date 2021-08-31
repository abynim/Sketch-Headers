//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSDataSupplierGroup.h>

@class MSFolderMonitor, MSLocalDataSupplier, MSLocalDataSupplierSubgroup, NSArray, NSURL;

@interface MSLocalDataSupplierGroup : MSDataSupplierGroup
{
    NSURL *_groupURL;
    MSLocalDataSupplierSubgroup *_subGroup;
    MSLocalDataSupplier *_topLevelSupplier;
    MSFolderMonitor *_folderMonitor;
}

+ (id)subgroupWithFileSytemURL:(id)arg1 localDataSupplierGroup:(id)arg2;
+ (id)localDataSupplierGroupFromFileSystemURL:(id)arg1 dataSupplierDelegate:(id)arg2 makeFolderMonitor:(BOOL)arg3 error:(id *)arg4;
+ (id)localDataSupplierGroupFromFileSystemURL:(id)arg1 dataSupplierDelegate:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MSFolderMonitor *folderMonitor; // @synthesize folderMonitor=_folderMonitor;
@property(retain, nonatomic) MSLocalDataSupplier *topLevelSupplier; // @synthesize topLevelSupplier=_topLevelSupplier;
@property(retain, nonatomic) MSLocalDataSupplierSubgroup *subGroup; // @synthesize subGroup=_subGroup;
@property(readonly, nonatomic) NSURL *groupURL; // @synthesize groupURL=_groupURL;
- (id)dataSupplierMenuItemForDataType:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL canGroupMultipleDataSuppliers;
- (id)dataSupplierWithIdentifier:(id)arg1;
@property(readonly, nonatomic) MSLocalDataSupplier *anyLocalDataSupplier;
- (BOOL)valid;
- (id)makeGroupIdentifier;
- (id)groupName;
@property(readonly, nonatomic) NSURL *groupFolder;
@property(readonly, nonatomic) NSArray *localDataSuppliers;
- (BOOL)postDecodingInitializingWithDelegate:(id)arg1;
- (void)setupFolderMonitor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalDataSupplier:(id)arg1 groupURL:(id)arg2 delegate:(id)arg3;

@end

