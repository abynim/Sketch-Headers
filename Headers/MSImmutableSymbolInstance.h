//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableSymbolInstance.h>

#import <SketchModel/MSFlowContainmentCheck-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface MSImmutableSymbolInstance : _MSImmutableSymbolInstance <MSFlowContainmentCheck>
{
    NSArray *_calculatedAvailableOverrides;
    // Error parsing type: A^^v, name: _availableOverridesInDocumentAtomicPointer
    NSString *_uniqueKey;
}

+ (id)defaultName;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (id)influencingSymbolIDs:(id)arg1;
- (struct CGSize)optimalSizeForMasterWithInferredLayoutInDocument:(id)arg1 skipCache:(BOOL)arg2 visitedSymbols:(id)arg3;
- (id)detachedLayerGroupRecursively:(BOOL)arg1 withDocument:(id)arg2;
- (BOOL)canSimplyWrapMasterLayers:(id)arg1 detachRecursively:(BOOL)arg2;
- (id)detachedGroupCacheKeyWithOverrides:(id)arg1 detachRecursively:(BOOL)arg2;
- (id)applicableOverridesForMaster:(id)arg1 info:(id)arg2;
- (id)detachedLayerGroupWithInfo:(id)arg1 visitedSymbols:(id)arg2;
- (id)createMutableDetachedLayerGroupWithInfo:(id)arg1 symbol:(id)arg2 visitedSymbols:(id)arg3;
- (id)createDetachedLayerGroupWithInfo:(id)arg1 symbol:(id)arg2 visitedSymbols:(id)arg3;
- (id)calculatePathInBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (void)calculateUniqueKey;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1 currentSelection:(id)arg2 ancestry:(id)arg3;
- (void)resetCachedOverrides;
- (id)availableOverridesWithDocument:(id)arg1;
- (double)scale;
- (BOOL)isScaled;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (id)overridesFromGroupForMigration:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (id)initWithMinimalSetup;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)initWithGroupForMigration:(id)arg1;
@property(nonatomic, readonly) NSArray *updateableColors;
- (id)firstFlowPassingTest:(CDUnknownBlockType)arg1 symbolsFromDocument:(id)arg2 visitedSymbols:(id)arg3;
@property(readonly, nonatomic) NSDictionary *overrides;
- (id)overridePointAttributeNamesForOverridePropertyMigration;
- (id)layersForHitTestingUnder:(id)arg1;
- (BOOL)differsFromLayer:(id)arg1;
- (void)stripRedundantOverridesOfSymbol:(id)arg1;
- (BOOL)shadowsFollowRotation;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)ensureOverrideValuesAreValidAndUnique;
- (id)updateOverridesDictionary:(id)arg1 withObjectIDMapping:(id)arg2 afterChangingSymbolMasterWithID:(id)arg3 currentID:(id)arg4;
- (void)updateOverridesWithObjectIDMapping:(id)arg1 afterChangingSymbolMasterWithID:(id)arg2;
- (id)overridesWithGridIndexRemoved:(id)arg1;
- (void)migratePropertiesFromV119OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV96OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV89OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV84OrEarlierWithUnarchiver:(id)arg1;
- (id)overrideMatchingPoint:(id)arg1 inDocument:(id)arg2;
- (id)calculateAvailableOverridesWithDocument:(id)arg1;
- (id)overridePointsInDocument:(id)arg1;
- (BOOL)canOverridePoint:(id)arg1 withAncestors:(id)arg2;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;

@end

