//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSStyledLayer.h>

@class NSArray, NSMutableArray, NSString;

@interface _MSSymbolInstance : MSStyledLayer
{
    BOOL _isEditingText;
    double _scale;
    NSString *_symbolID;
    NSMutableArray *_overrideValues;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultAgainst:(id)arg1 inContext:(id)arg2;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_overrideValues:(id)arg1;
- (void)setRaw_symbolID:(id)arg1;
- (void)setRaw_scale:(double)arg1;
- (BOOL)removeCollaborationChild:(id)arg1;
- (void)registerCollaborationSubtree:(id)arg1;
- (id)childCollaborationObjectWithPlainID:(id)arg1;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveOverrideValueFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllOverrideValues;
- (void)removeOverrideValuesAtIndexes:(id)arg1;
- (void)removeOverrideValueAtIndex:(unsigned long long)arg1;
- (void)removeOverrideValue:(id)arg1;
- (void)insertOverrideValues:(id)arg1 afterOverrideValue:(id)arg2;
- (void)insertOverrideValue:(id)arg1 afterOverrideValue:(id)arg2;
- (void)insertOverrideValues:(id)arg1 beforeOverrideValue:(id)arg2;
- (void)insertOverrideValue:(id)arg1 beforeOverrideValue:(id)arg2;
- (void)insertOverrideValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addOverrideValues:(id)arg1;
- (void)addOverrideValue:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

