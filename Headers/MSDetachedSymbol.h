//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSDetachedSymbol.h>

@class MSDetachedComponentUpdater, MSImmutableSymbolInstance, MSImmutableSymbolMaster, MSOverrideStack, MSPatch;

@interface MSDetachedSymbol : _MSDetachedSymbol
{
    BOOL _updating;
    BOOL _hasOverrideChanges;
    BOOL _childrenUpdated;
    BOOL _hasChanged;
    unsigned long long _detachState;
    MSImmutableSymbolMaster *_updatedMaster;
    MSImmutableSymbolMaster *_originalMaster;
    MSImmutableSymbolInstance *_updatedInstance;
    MSImmutableSymbolInstance *_originalInstance;
    MSDetachedComponentUpdater *_componentUpdater;
    MSPatch *_changePatch;
}

+ (id)createDetachedSymbolForInstance:(id)arg1 componentUpdater:(id)arg2;
+ (id)recursiveSymbolForInstance:(id)arg1 componentUpdater:(id)arg2;
+ (id)missingSymbolForInstance:(id)arg1 componentUpdater:(id)arg2;
+ (id)errorSymbolForInstance:(id)arg1 componentUpdater:(id)arg2 state:(unsigned long long)arg3;
+ (id)createDetachedForSymbolMaster:(id)arg1 componentUpdater:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasChanged; // @synthesize hasChanged=_hasChanged;
@property(nonatomic) BOOL childrenUpdated; // @synthesize childrenUpdated=_childrenUpdated;
@property(nonatomic) BOOL hasOverrideChanges; // @synthesize hasOverrideChanges=_hasOverrideChanges;
@property(nonatomic) BOOL updating; // @synthesize updating=_updating;
@property(retain, nonatomic) MSPatch *changePatch; // @synthesize changePatch=_changePatch;
@property(nonatomic) __weak MSDetachedComponentUpdater *componentUpdater; // @synthesize componentUpdater=_componentUpdater;
@property(retain, nonatomic) MSImmutableSymbolInstance *originalInstance; // @synthesize originalInstance=_originalInstance;
@property(retain, nonatomic) MSImmutableSymbolInstance *updatedInstance; // @synthesize updatedInstance=_updatedInstance;
@property(retain, nonatomic) MSImmutableSymbolMaster *originalMaster; // @synthesize originalMaster=_originalMaster;
@property(retain, nonatomic) MSImmutableSymbolMaster *updatedMaster; // @synthesize updatedMaster=_updatedMaster;
- (id)description;
- (void)refaultChildrenAgainst:(id)arg1 inContext:(id)arg2;
- (void)registerAsRecursive;
- (void)checkForRecursion;
- (void)fixRecursionUnder:(id)arg1;
- (void)replace:(id)arg1 with:(id)arg2;
- (BOOL)isRecursivelyNested;
@property(readonly, nonatomic) BOOL isMarkedAsRecursive;
- (void)fixRecursion;
- (void)setIsVisible:(BOOL)arg1;
- (void)setRaw_frame:(id)arg1;
- (void)setRaw_scale:(double)arg1;
- (void)updateOrPrepareNestedSymbolForUpdate:(CDUnknownBlockType)arg1;
- (void)setRaw_allowsOverrides:(BOOL)arg1;
- (void)setRaw_overrideProperties:(id)arg1;
- (void)setRaw_overrideValues:(id)arg1;
- (id)collaborationObjectWithID:(id)arg1;
- (BOOL)hasClippingMask;
- (BOOL)shouldBreakMaskChain;
@property(nonatomic) unsigned long long detachState; // @synthesize detachState=_detachState;
- (BOOL)isMissing;
- (void)detachNestedInstancesUnder:(id)arg1;
- (void)applyOverridesUnder:(id)arg1 overrideStack:(id)arg2 recursive:(BOOL)arg3;
- (void)applyNestedOverrideStack:(id)arg1 recursive:(BOOL)arg2;
- (id)switchNestedSymbolFrom:(id)arg1 to:(id)arg2;
- (void)transferPropertiesFromInstance:(id)arg1;
@property(readonly, nonatomic) double inheritedScale;
- (void)resetUpdateFlags;
- (void)updateChildren;
- (void)updateChildrenOnMaster;
- (void)updateChildrenOnInstance;
@property(readonly, nonatomic) BOOL needsUpdate;
- (void)updateOnTreeStructureChange;
- (void)update;
@property(readonly, nonatomic) MSOverrideStack *inheritedOverrideStack;
@property(readonly, nonatomic) MSDetachedSymbol *parentDetachedSymbol;
- (BOOL)prepareForUpdateIfAffectedByChangeOfSharedStyleIn:(id)arg1;
- (void)enumerateNestedSymbolsInBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNestedSymbolsUnder:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (BOOL)prepareForUpdateWithInstance:(id)arg1;
- (BOOL)prepareForUpdateWithMaster:(id)arg1;
- (void)resetInstanceAgainstMaster;
- (void)performInitWithImmutableModelObject:(id)arg1;

@end

