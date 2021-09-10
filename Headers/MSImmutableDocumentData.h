//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableDocumentData.h>

#import <SketchModel/MSDocumentDataProtocol-Protocol.h>
#import <SketchModel/MSLayerContainment-Protocol.h>
#import <SketchModel/MSMetadataCoding-Protocol.h>

@class MSDocumentState, MSImmutablePage, MSJSONSchema, MSStateContainer, NSArray, NSData, NSDictionary, NSString, _TtC11SketchModel20MSInfluenceRectCache, _TtC11SketchModel21MSDetachedSymbolCache;

@interface MSImmutableDocumentData : _MSImmutableDocumentData <MSLayerContainment, MSMetadataCoding, MSDocumentDataProtocol>
{
    NSArray *_calculatedLocalSymbols;
    // Error parsing type: A^^v, name: _localSymbolsAtomicPointer
    NSDictionary *_calculatedSymbolsIndexedByID;
    // Error parsing type: A^^v, name: _symbolsIndexedByIDAtomicPointer
    NSDictionary *_calculatedLayerStylesIndexedByID;
    // Error parsing type: A^^v, name: _layerStylesIndexedByIDAtomicPointer
    NSDictionary *_calculatedTextStylesIndexedByID;
    // Error parsing type: A^^v, name: _textStylesIndexedByIDAtomicPointer
    MSJSONSchema *_metadataConfiguration;
    _TtC11SketchModel21MSDetachedSymbolCache *_detachedSymbolCache;
    _TtC11SketchModel20MSInfluenceRectCache *_influenceRectCache;
    NSDictionary *_metadata;
    NSData *_textPreviewData;
    NSArray *_selectedOverrides;
    NSDictionary *_symbolsIndexedByID;
    NSDictionary *_layerStylesIndexedByID;
    NSDictionary *_textStylesIndexedByID;
    NSString *_sessionIdentifier;
    MSStateContainer *_stateContainer;
}

+ (void)setIsRunningHeadless:(BOOL)arg1;
+ (BOOL)isRunningHeadless;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (id)ms_influenceRectCacheWhenRunningHeadless;
+ (BOOL)persistsObjectID;
+ (id)loadDocumentDataWithMetadata:(id)arg1 textPreviewData:(id)arg2 textPreviewMetadata:(id)arg3 loadBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MSStateContainer *stateContainer; // @synthesize stateContainer=_stateContainer;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSDictionary *textStylesIndexedByID; // @synthesize textStylesIndexedByID=_textStylesIndexedByID;
@property(retain, nonatomic) NSDictionary *layerStylesIndexedByID; // @synthesize layerStylesIndexedByID=_layerStylesIndexedByID;
@property(retain, nonatomic) NSDictionary *symbolsIndexedByID; // @synthesize symbolsIndexedByID=_symbolsIndexedByID;
@property(readonly, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
@property(retain, nonatomic) NSData *textPreviewData; // @synthesize textPreviewData=_textPreviewData;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak _TtC11SketchModel20MSInfluenceRectCache *influenceRectCache; // @synthesize influenceRectCache=_influenceRectCache;
@property(nonatomic) __weak _TtC11SketchModel21MSDetachedSymbolCache *detachedSymbolCache; // @synthesize detachedSymbolCache=_detachedSymbolCache;
- (void)performPostMigrationTidyupWithUnarchiver:(id)arg1 UIMetadata:(id)arg2;
- (void)resetStateAndMetadataForDuplication;
- (id)layers;
- (id)embeddedFontReferences;
- (id)pagesAndArtboardsMetadata;
- (id)allArtboards;
- (BOOL)wasSavedByTestVersion;
- (BOOL)wasSavedByOldVersion;
- (id)textLayersWithUnsafeFonts;
@property(copy) MSDocumentState *documentState;
- (id)immutableDocumentState;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
@property(readonly, nonatomic) MSImmutablePage *currentPage;
- (id)artboardWithID:(id)arg1 page:(id *)arg2;
- (id)layerStyleWithID:(id)arg1;
- (id)textStyleWithID:(id)arg1;
- (id)allTextStyles;
- (id)artboardWithID:(id)arg1;
- (id)symbolWithID:(id)arg1;
- (id)pageWithID:(id)arg1;
- (void)objectDidInit;
@property(readonly, nonatomic) NSArray *allSymbols;
@property(readonly, nonatomic) NSArray *localSymbols;
- (id)workspaceItemNamed:(id)arg1;
@property(readonly, nonatomic) MSJSONSchema *metadataConfiguration; // @synthesize metadataConfiguration=_metadataConfiguration;
- (id)defaultPagesArray;
- (void)performInitEmptyObject;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)initWithMinimalSetup;
- (void)migratePropertiesFromV113OrEarlierWithUnarchiver:(id)arg1;
- (void)performPostMigrationTidyupFromV131WithUnarchiver:(id)arg1 UIMetadata:(id)arg2;
- (id)newPageForMigratedSymbols:(id)arg1;
- (void)arrangeMigratedSymbolsInGrid:(id)arg1;
- (void)stripRedundantOverridesFromInstances:(id)arg1 ofSymbol:(id)arg2;
- (void)stripRedundantOverridesFromInstancesOfSymbols:(id)arg1;
- (id)migratedSymbolFromSymbol:(id)arg1 group:(id)arg2;
- (id)migratedSymbolsFromOldSymbols:(id)arg1;
- (void)migratePropertiesFromV132OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV91OrEarlierWithUnarchiver:(id)arg1;
- (void)regenerateObjectIDOnSymbolMaster:(id)arg1;
- (void)migratePropertiesFromV78OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV62OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV60OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV54OrEarlierWithUnarchiver:(id)arg1;
- (id)subObjectsForTreeDiff;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (struct CGRect)influenceRectForAncestors:(id)arg1 document:(id)arg2;
- (id)initWithMutableDocumentDataMetadataCopy:(id)arg1;
- (BOOL)hasNonEmbeddedFontsAvailable;
- (id)unavailableForeignSymbolFontNames:(long long *)arg1;
- (id)unavailableForeignTextStyleFontNames:(long long *)arg1;
- (id)unavailableSharedTextStyleFontNames;
- (id)unavailableDocumentFontNames;
- (id)unavailableFontNamesExcludingLocalDocument:(BOOL)arg1 countOfAcknowledgedForeignFonts:(long long *)arg2;
- (id)unavailableForeignFontNames;
- (id)unavailableFontNames;
- (BOOL)shouldShowMissingLibraryFontsWarning;
- (BOOL)shouldShowMissingFontsBadge;
- (id)fontNames;
- (id)metadataForKey:(id)arg1 inDictionary:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
@property(readonly, nonatomic) NSString *UIMetadataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly) Class superclass;

@end

