//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStylePart.h>

@class MSImmutableColor, MSImmutableGradient, MSImmutableGraphicsContextSettings;

@interface _MSImmutableStyleBasicFill : MSImmutableStylePart
{
    unsigned long long _fillType;
    MSImmutableColor *_color;
    MSImmutableGraphicsContextSettings *_contextSettings;
    MSImmutableGradient *_gradient;
}

+ (Class)mutableClass;
+ (id)defaultFillColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSImmutableGradient *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(readonly, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
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
@property(nonatomic, readonly) BOOL hasDefaultFillColor;

@end

