//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSObject, NSString;
@protocol NSCopying;

@interface _MSOverrideValue : MSModelObject
{
    BOOL _isEditing;
    NSString *_originalName;
    NSString *_overrideName;
    NSObject<NSCopying> *_value;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultAgainst:(id)arg1;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_value:(id)arg1;
- (void)setRaw_overrideName:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(copy, nonatomic) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

