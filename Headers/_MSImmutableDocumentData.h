//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSImmutableAssetCollection, MSImmutablePatchInfo, MSImmutableSharedStyleContainer, MSImmutableSharedTextStyleContainer, MSImmutableSwatchContainer, MSImmutableSymbolContainer, NSArray, NSDictionary;

@interface _MSImmutableDocumentData : MSImmutableModelObject
{
    unsigned long long _colorSpace;
    unsigned long long _currentPageIndex;
    NSDictionary *_userInfo;
    MSImmutableAssetCollection *_assets;
    NSArray *_fontReferences;
    NSArray *_foreignLayerStyles;
    NSArray *_foreignSwatches;
    NSArray *_foreignSymbols;
    NSArray *_foreignTextStyles;
    MSImmutableSharedStyleContainer *_layerStyles;
    MSImmutableSymbolContainer *_layerSymbols;
    MSImmutableSharedTextStyleContainer *_layerTextStyles;
    NSArray *_pages;
    MSImmutablePatchInfo *_patchInfo;
    MSImmutableSwatchContainer *_sharedSwatches;
    NSArray *_workspaceItems;
}

+ (Class)mutableClass;
+ (id)defaultPageArray;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *workspaceItems; // @synthesize workspaceItems=_workspaceItems;
@property(readonly, nonatomic) MSImmutableSwatchContainer *sharedSwatches; // @synthesize sharedSwatches=_sharedSwatches;
@property(readonly, nonatomic) MSImmutablePatchInfo *patchInfo; // @synthesize patchInfo=_patchInfo;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) MSImmutableSharedTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(readonly, nonatomic) MSImmutableSymbolContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(readonly, nonatomic) MSImmutableSharedStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(readonly, nonatomic) NSArray *foreignTextStyles; // @synthesize foreignTextStyles=_foreignTextStyles;
@property(readonly, nonatomic) NSArray *foreignSymbols; // @synthesize foreignSymbols=_foreignSymbols;
@property(readonly, nonatomic) NSArray *foreignSwatches; // @synthesize foreignSwatches=_foreignSwatches;
@property(readonly, nonatomic) NSArray *foreignLayerStyles; // @synthesize foreignLayerStyles=_foreignLayerStyles;
@property(readonly, nonatomic) NSArray *fontReferences; // @synthesize fontReferences=_fontReferences;
@property(readonly, nonatomic) MSImmutableAssetCollection *assets; // @synthesize assets=_assets;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)privateSet_currentPageIndex:(unsigned long long)arg1;
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
@property(nonatomic, readonly) BOOL hasDefaultPageArray;

@end

