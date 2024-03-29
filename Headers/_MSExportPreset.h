//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSArray, NSMutableArray, NSString;

@interface _MSExportPreset : MSModelObject
{
    NSString *_name;
    BOOL _shouldApplyAutomatically;
    NSMutableArray *_exportFormats;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_exportFormats:(id)arg1;
- (void)setRaw_shouldApplyAutomatically:(BOOL)arg1;
- (void)setRaw_name:(id)arg1;
- (BOOL)removeCollaborationChild:(id)arg1;
- (void)registerCollaborationSubtree:(id)arg1;
- (id)childCollaborationObjectWithPlainID:(id)arg1;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveExportFormatFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllExportFormats;
- (void)removeExportFormatsAtIndexes:(id)arg1;
- (void)removeExportFormatAtIndex:(unsigned long long)arg1;
- (void)removeExportFormat:(id)arg1;
- (void)insertExportFormats:(id)arg1 afterExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 afterExportFormat:(id)arg2;
- (void)insertExportFormats:(id)arg1 beforeExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 beforeExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addExportFormats:(id)arg1;
- (void)addExportFormat:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
@property(nonatomic) BOOL shouldApplyAutomatically; // @synthesize shouldApplyAutomatically=_shouldApplyAutomatically;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

