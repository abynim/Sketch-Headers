//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObjectCommon.h>

#import <SketchModel/MSMetadataCoding-Protocol.h>
#import <SketchModel/MSModelObject-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@class MSDocumentData, MSForeignObject, MSImmutableModelObject, MSLayerGroup, MSModelObjectCacheGeneration, NSString;
@protocol MSRootLayer;

@interface MSModelObject : MSModelObjectCommon <NSCopying, MSMetadataCoding, MSModelObject>
{
    MSImmutableModelObject *_immutableModelObject;
    MSModelObject *_parentObject;
    long long _faultingState;
    MSModelObjectCacheGeneration *_modelObjectCacheGeneration;
}

+ (Class)immutableClass;
+ (void)refaultContentsOfArray:(id)arg1 against:(id)arg2;
+ (BOOL)allowsFaulting;
+ (BOOL)persistsObjectID;
- (void).cxx_destruct;
@property(retain, nonatomic) MSModelObjectCacheGeneration *modelObjectCacheGeneration; // @synthesize modelObjectCacheGeneration=_modelObjectCacheGeneration;
@property(nonatomic) long long faultingState; // @synthesize faultingState=_faultingState;
@property(nonatomic) __weak MSModelObject *parentObject; // @synthesize parentObject=_parentObject;
- (void)didMoveToParentObject;
- (void)willMoveToParentObject:(id)arg1;
- (void)enumerateFaultedDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isDescendantOfObject:(id)arg1;
@property(readonly, nonatomic) MSLayerGroup<MSRootLayer> *parentRoot;
@property(readonly, nonatomic) __weak MSDocumentData *documentData;
- (void)breakConnectionWith:(id)arg1;
- (void)setPrimitiveParent:(id)arg1;
- (void)setAsParentOnChildren;
- (BOOL)matchesImmutable:(id)arg1;
@property(readonly, nonatomic) BOOL hasBeenInvalidated;
- (void)invalidateImmutableObjectAndAncestors;
- (void)invalidateImmutableObject;
- (void)invalidateModelCacheGeneration;
- (void)invalidateModelCacheGenerationForObject:(id)arg1 property:(id)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
@property(readonly, nonatomic) MSImmutableModelObject *immutableModelObject;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)refaultAgainst:(id)arg1;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)fireFaultIfNeeded;
@property(readonly, nonatomic) BOOL isFault;
- (id)generateObjectID;
@property(copy, nonatomic) NSString *objectID; // @dynamic objectID;
- (id)initWithImmutableModelObject:(id)arg1;
- (id)initWithDefaults:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)correctInvalidGamma;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ofStorage:(id)arg3 forRelationship:(id)arg4;
- (void)insertObjects:(id)arg1 afterObject:(id)arg2 inStorage:(id)arg3 forRelationship:(id)arg4;
- (void)insertObject:(id)arg1 afterObject:(id)arg2 inStorage:(id)arg3 forRelationship:(id)arg4;
- (void)insertObjects:(id)arg1 beforeObject:(id)arg2 inStorage:(id)arg3 forRelationship:(id)arg4;
- (void)insertObject:(id)arg1 beforeObject:(id)arg2 inStorage:(id)arg3 forRelationship:(id)arg4;
- (void)removeAllObjectsFromStorage:(id)arg1 forRelationship:(id)arg2;
- (void)removeObjectsInArray:(id)arg1 fromStorage:(id)arg2 forRelationship:(id)arg3;
- (void)removeObjectsAtIndexes:(id)arg1 fromStorage:(id)arg2 forRelationship:(id)arg3;
- (void)removeObjectAtIndex:(unsigned long long)arg1 fromStorage:(id)arg2 forRelationship:(id)arg3;
- (void)removeObject:(id)arg1 fromStorage:(id)arg2 forRelationship:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ofStorage:(id)arg3 forRelationship:(id)arg4;
- (void)replaceContentsWithArray:(id)arg1 inStorage:(id)arg2 forRelationship:(id)arg3;
- (void)addObjectsFromArray:(id)arg1 toStorage:(id)arg2 forRelationship:(id)arg3;
- (void)addObject:(id)arg1 toStorage:(id)arg2 forRelationship:(id)arg3;
@property(readonly, nonatomic) BOOL isForeign;
@property(readonly, nonatomic) MSForeignObject *foreignObject;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSwatchReferencesFrom:(id)arg1 to:(id)arg2;
- (id)metadataForKey:(id)arg1 inDictionary:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
@property(readonly, nonatomic) NSString *UIMetadataKey;
- (id)metadataForKey:(id)arg1;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

