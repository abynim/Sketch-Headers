//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class NSArray;

@interface _MSImmutableShapePathLayer : MSImmutableStyledLayer
{
    BOOL _edited;
    BOOL _isClosed;
    long long _pointRadiusBehaviour;
    NSArray *_points;
}

+ (Class)mutableClass;
+ (BOOL)isEditedByDefault;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) long long pointRadiusBehaviour; // @synthesize pointRadiusBehaviour=_pointRadiusBehaviour;
@property(readonly, nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property(readonly, nonatomic) BOOL edited; // @synthesize edited=_edited;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
@property(nonatomic, readonly) NSArray *defaultCurvePoints;
@property(nonatomic, readonly) BOOL hasDefaultCurvePoints;

@end

