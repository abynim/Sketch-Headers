//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class NSArray, NSString;

@interface _MSImmutableSymbolInstance : MSImmutableStyledLayer
{
    BOOL _isEditingText;
    double _scale;
    NSString *_symbolID;
    NSArray *_overrideValues;
}

+ (Class)mutableClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(readonly, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
- (void)privateSet_isEditingText:(BOOL)arg1;
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

@end

