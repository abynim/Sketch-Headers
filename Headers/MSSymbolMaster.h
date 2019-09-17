//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSSymbolMaster.h>

#import <SketchModel/BCSortable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface MSSymbolMaster : _MSSymbolMaster <BCSortable>
{
    BOOL _isDirty;
    long long _changeIdentifier;
    NSMutableDictionary *_internalOverrideProperies;
}

+ (void)copyPropertiesFrom:(id)arg1 to:(id)arg2;
+ (id)convertSymbolToArtboard:(id)arg1;
+ (id)convertArtboardToSymbol:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *internalOverrideProperies; // @synthesize internalOverrideProperies=_internalOverrideProperies;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) long long changeIdentifier; // @synthesize changeIdentifier=_changeIdentifier;
- (void).cxx_destruct;
- (void)updateOverridesWithObjectIDMap:(id)arg1;
- (void)updateOverridePropertiesWithObjectIDMap:(id)arg1;
- (void)syncOverrideProperties;
- (void)setOverridePoint:(id)arg1 editable:(BOOL)arg2;
- (id)internalSetOverridePoint:(id)arg1 editable:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *overrideProperies;
- (BOOL)limitsSelectionToBounds;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (BOOL)compareFrameFrom:(id)arg1 withComparisonforPurpose:(unsigned long long)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)parentSymbol;
- (id)rootForNameUniquing;
- (id)ancestorIDsForLayerNamed:(id)arg1 skip:(id)arg2;
- (id)ancestorIDsForLayerNamed:(id)arg1;
- (BOOL)isSafeToDelete;
- (void)multiplyBy:(double)arg1;
- (id)ungroup;
- (void)removeFromParentAndDetachAllInstances;
- (void)detachAllInstances;
- (BOOL)ensureSymbolIDUniqueInDocument:(id)arg1;
- (BOOL)canInsertInstanceIntoGroupWithoutInfiniteRecursion:(id)arg1;
- (BOOL)hasInstances;
@property(readonly, nonatomic) NSArray *allInfluencedInstances;
- (id)nestedSymbolsSkipping:(id)arg1;
@property(readonly, nonatomic) NSSet *nestedSymbols;
@property(readonly, nonatomic) NSArray *allInstances;
- (id)newSymbolInstance;
- (id)copyWithIDMapping:(id)arg1;
- (void)moveChildrenToIdenticalPositionAfterResizeFromRect:(struct CGRect)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)invalidateModifiedSymbolCache;
- (void)invalidateImmutableObject;
- (void)syncPropertiesFromObject:(id)arg1;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)overridePropertiesMatchWithObject:(id)arg1;
- (void)applyOverrides:(id)arg1 document:(id)arg2 visitedSymbols:(id)arg3;
@property(readonly, nonatomic) NSArray *availableOverrides;
- (void)preserveFlexibleWidthTextLayersInMutableMaster:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)applyBackgroundColorProperties;
- (void)clearBackgroundBlurCaches;
- (void)applyResizeToRect:(struct CGRect)arg1 preferNaturalSizeOnAxes:(unsigned long long)arg2;
- (void)applyScale:(double)arg1;
- (void)applyOverridesRespectingLayout:(id)arg1 document:(id)arg2 visitedSymbols:(id)arg3;
- (BOOL)hasInferredLayouts;
- (void)applyOverrides:(id)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 resizeToNaturalSizeOnAxes:(unsigned long long)arg4 inDocument:(id)arg5 visitedSymbols:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

