//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutableObjectChangeTracker, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface MSDetachedComponentUpdater : NSObject
{
    NSDictionary *_symbolIDsToDetachedMasters;
    NSDictionary *_uniqueIDsToDetachedInstances;
    MSImmutableDocumentData *_documentData;
    MSImmutableDocumentData *_currentDocument;
    NSMutableDictionary *_detachedMasters;
    NSMutableDictionary *_detachedInstances;
    NSMutableDictionary *_updatedMasters;
    NSMutableDictionary *_updatedInstances;
    NSSet *_allInstances;
    NSMutableDictionary *_instancesByPage;
    MSImmutableObjectChangeTracker *_pageTracker;
    NSMutableSet *_recursiveSymbols;
    MSImmutableObjectChangeTracker *_sharedStyleTracker;
    MSImmutableObjectChangeTracker *_symbolMasterTracker;
    MSImmutableObjectChangeTracker *_symbolInstanceTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSImmutableObjectChangeTracker *symbolInstanceTracker; // @synthesize symbolInstanceTracker=_symbolInstanceTracker;
@property(readonly, nonatomic) MSImmutableObjectChangeTracker *symbolMasterTracker; // @synthesize symbolMasterTracker=_symbolMasterTracker;
@property(readonly, nonatomic) MSImmutableObjectChangeTracker *sharedStyleTracker; // @synthesize sharedStyleTracker=_sharedStyleTracker;
@property(readonly, nonatomic) NSMutableSet *recursiveSymbols; // @synthesize recursiveSymbols=_recursiveSymbols;
@property(readonly, nonatomic) MSImmutableObjectChangeTracker *pageTracker; // @synthesize pageTracker=_pageTracker;
@property(readonly, nonatomic) NSMutableDictionary *instancesByPage; // @synthesize instancesByPage=_instancesByPage;
@property(readonly, nonatomic) NSSet *allInstances; // @synthesize allInstances=_allInstances;
@property(readonly, nonatomic) NSMutableDictionary *updatedInstances; // @synthesize updatedInstances=_updatedInstances;
@property(readonly, nonatomic) NSMutableDictionary *updatedMasters; // @synthesize updatedMasters=_updatedMasters;
@property(readonly, nonatomic) NSMutableDictionary *detachedInstances; // @synthesize detachedInstances=_detachedInstances;
@property(readonly, nonatomic) NSMutableDictionary *detachedMasters; // @synthesize detachedMasters=_detachedMasters;
@property(retain, nonatomic) MSImmutableDocumentData *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) MSImmutableDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) NSDictionary *uniqueIDsToDetachedInstances; // @synthesize uniqueIDsToDetachedInstances=_uniqueIDsToDetachedInstances;
@property(retain, nonatomic) NSDictionary *symbolIDsToDetachedMasters; // @synthesize symbolIDsToDetachedMasters=_symbolIDsToDetachedMasters;
- (void)registerSymbolIDAsRecursive:(id)arg1;
- (id)detachedSymbolForInstance:(id)arg1;
- (id)detachedSymbolWithID:(id)arg1;
- (id)convertMutableDictionaryToImmutables:(id)arg1;
- (void)updatedAffectedSymbolInstances;
- (BOOL)updateWithDocument:(id)arg1;
- (void)resetUpdateFlags;
- (BOOL)updateSharedStyleOverrides;
- (id)sharedStylesInDocument:(id)arg1;
- (BOOL)prepareSymbolInstancesForUpdate:(id)arg1;
- (void)removeDetachedInstanceFor:(id)arg1;
- (void)updateDetachedInstanceFor:(id)arg1;
- (void)addDetachedInstanceFor:(id)arg1;
- (void)updateInstanceArraysForDocument:(id)arg1;
- (void)addInstancesUnder:(id)arg1 toSet:(id)arg2;
- (BOOL)prepareSymbolMastersForUpdate:(id)arg1;
- (void)removeDetachedMasterFor:(id)arg1;
- (void)updateDetachedMasterFor:(id)arg1;
- (void)addDetachedMasterFor:(id)arg1;
- (id)init;

@end

