//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSShapePathLayer.h>

@interface _MSRectangleShape : MSShapePathLayer
{
    double _fixedRadius;
    BOOL _needsConvertionToNewRoundCorners;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)setRaw_needsConvertionToNewRoundCorners:(BOOL)arg1;
- (void)setRaw_fixedRadius:(double)arg1;
- (BOOL)removeCollaborationChild:(id)arg1;
- (void)registerCollaborationSubtree:(id)arg1;
- (id)childCollaborationObjectWithPlainID:(id)arg1;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) BOOL needsConvertionToNewRoundCorners; // @synthesize needsConvertionToNewRoundCorners=_needsConvertionToNewRoundCorners;
@property(nonatomic) double fixedRadius; // @synthesize fixedRadius=_fixedRadius;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

