//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableSymbolMaster.h>

#import <SketchModel/BCSortable-Protocol.h>

@class BCReadWriteLock, NSArray, NSDictionary, NSString;

@interface MSImmutableSymbolMaster : _MSImmutableSymbolMaster <BCSortable>
{
    BCReadWriteLock *_calculatedAvailableOverridesAtomicity;
    NSArray *_calculatedAvailableOverrides;
    NSDictionary *_calculatedOverrideProperties;
    // Error parsing type: A^^v, name: _calculatedOverridePropertiesAtomicPointer
}

+ (id)defaultName;
+ (unsigned long long)traits;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
- (void).cxx_destruct;
- (BOOL)limitsSelectionToBounds;
- (id)overridePropertyForName:(id)arg1;
- (id)availableOverridesWithDocument:(id)arg1;
- (struct BCEdgePaddings)influenceRectPaddingForInstancesInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (BOOL)influenceRectClipsToBounds;
@property(readonly, nonatomic) NSDictionary *overridePropertyDict;
@property(readonly, nonatomic) BOOL isWorthDetaching;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (void)objectDidInit;
- (void)migrationSetOverrideProperties:(id)arg1;
- (void)migratePropertiesFromV113OrEarlierWithUnarchiver:(id)arg1;
- (id)encodeForManifest:(id)arg1 earlierSlugs:(id)arg2 includingFiles:(BOOL)arg3;
- (id)calculateAvailableOverridesWithDocument:(id)arg1;
- (id)availableOverridesWithParent:(id)arg1 overrideValues:(id)arg2 overrideProperties:(id)arg3 inDocument:(id)arg4;
- (id)overridePropertiesByCombiningParentsOverrideProperties:(id)arg1 fromParent:(id)arg2;
- (void)mergeNestedOverridesTo:(id)arg1 withParent:(id)arg2;
- (BOOL)canAddOverridesForMaster:(id)arg1 toParent:(id)arg2;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;
- (id)overridePointsInDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

