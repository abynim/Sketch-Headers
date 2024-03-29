//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class NSArray;

@interface _MSImmutableGradient : MSImmutableModelObject
{
    double _elipseLength;
    struct CGPoint _from;
    long long _gradientType;
    struct CGPoint _to;
    NSArray *_stops;
}

+ (Class)mutableClass;
+ (id)defaultGradientStops;
+ (id)immutableDefaultGradientStops;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *stops; // @synthesize stops=_stops;
@property(readonly, nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(readonly, nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(readonly, nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(readonly, nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
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
@property(nonatomic, readonly) BOOL hasDefaultGradientStops;

@end

