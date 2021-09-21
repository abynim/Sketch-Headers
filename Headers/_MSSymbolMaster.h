//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSArtboardGroup.h>

@class NSArray, NSMutableArray, NSString;

@interface _MSSymbolMaster : MSArtboardGroup
{
    BOOL _allowsOverrides;
    BOOL _includeBackgroundColorInInstance;
    NSString *_symbolID;
    NSMutableArray *_overrideProperties;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_overrideProperties:(id)arg1;
- (void)setRaw_symbolID:(id)arg1;
- (void)setRaw_includeBackgroundColorInInstance:(BOOL)arg1;
- (void)setRaw_allowsOverrides:(BOOL)arg1;
- (BOOL)removeCollaborationChild:(id)arg1;
- (void)registerCollaborationSubtree:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveOverridePropertyFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllOverridePropertys;
- (void)removeOverridePropertysAtIndexes:(id)arg1;
- (void)removeOverridePropertyAtIndex:(unsigned long long)arg1;
- (void)removeOverrideProperty:(id)arg1;
- (void)insertOverridePropertys:(id)arg1 afterOverrideProperty:(id)arg2;
- (void)insertOverrideProperty:(id)arg1 afterOverrideProperty:(id)arg2;
- (void)insertOverridePropertys:(id)arg1 beforeOverrideProperty:(id)arg2;
- (void)insertOverrideProperty:(id)arg1 beforeOverrideProperty:(id)arg2;
- (void)insertOverrideProperty:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addOverridePropertys:(id)arg1;
- (void)addOverrideProperty:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *overrideProperties; // @synthesize overrideProperties=_overrideProperties;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(nonatomic) BOOL includeBackgroundColorInInstance; // @synthesize includeBackgroundColorInInstance=_includeBackgroundColorInInstance;
@property(nonatomic) BOOL allowsOverrides; // @synthesize allowsOverrides=_allowsOverrides;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

