//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSDocumentData.h>

#import <SketchModel/MSDocumentDataProtocol-Protocol.h>
#import <SketchModel/MSLayerContainment-Protocol.h>

@class MSDocumentState, MSFontList, MSImmutableDocumentData, MSPage, MSStateContainer, NSArray, NSData, NSDictionary, NSString, _TtC11SketchModel16MSEditingContext, _TtC11SketchModel20MSInfluenceRectCache, _TtC11SketchModel21MSDetachedSymbolCache;
@protocol MSDocumentDataDelegate;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSDocumentDataProtocol>
{
    BOOL _autoExpandGroupsInLayerList;
    NSDictionary *_symbolMap;
    NSArray *_selectedOverrides;
    _TtC11SketchModel16MSEditingContext *_editingContext;
    _TtC11SketchModel21MSDetachedSymbolCache *_detachedSymbolCache;
    _TtC11SketchModel20MSInfluenceRectCache *_influenceRectCache;
    id <MSDocumentDataDelegate> _delegate;
    NSDictionary *_metadata;
    NSData *_textPreviewData;
    NSData *_textPreviewMetadata;
    MSFontList *_fontList;
    NSString *_sessionIdentifier;
    MSStateContainer *_stateContainer;
}

+ (id)libraryForForeignObject:(id)arg1 inLibraries:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) MSStateContainer *stateContainer; // @synthesize stateContainer=_stateContainer;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(retain, nonatomic) NSData *textPreviewMetadata; // @synthesize textPreviewMetadata=_textPreviewMetadata;
@property(retain, nonatomic) NSData *textPreviewData; // @synthesize textPreviewData=_textPreviewData;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL autoExpandGroupsInLayerList; // @synthesize autoExpandGroupsInLayerList=_autoExpandGroupsInLayerList;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _TtC11SketchModel20MSInfluenceRectCache *influenceRectCache; // @synthesize influenceRectCache=_influenceRectCache;
@property(nonatomic) __weak _TtC11SketchModel21MSDetachedSymbolCache *detachedSymbolCache; // @synthesize detachedSymbolCache=_detachedSymbolCache;
@property(retain, nonatomic) _TtC11SketchModel16MSEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void)setData:(id)arg1 forWorkspaceItemNamed:(id)arg2;
- (id)workspaceItemNamed:(id)arg1;
- (void)resetStateAndMetadataForDuplicationIncludingObjectID:(BOOL)arg1;
- (void)resetStateAndMetadataForDuplication;
@property(copy, nonatomic) MSDocumentState *documentState;
- (id)layers;
- (void)refaultAgainst:(id)arg1;
- (void)prepareForChangeProcessing;
- (void)layerDidChangeStyle:(id)arg1;
- (void)replaceExistingCreationMetadata;
- (id)embeddedFontReferences;
- (void)updateFontReferencesPurgingForeignObjects:(BOOL)arg1;
- (id)postscriptNamesFromForeignObjects;
- (id)createFontReferenceForPostscriptName:(id)arg1 familyName:(id)arg2;
- (void)updateReferencesLookup:(id)arg1 withReferencesFromFamilyName:(id)arg2;
- (id)urlsForFacesOfFontFamily:(id)arg1;
- (void)embedEligibleFontsInReferences:(id)arg1;
- (id)swatchWithID:(id)arg1;
- (id)allSwatches;
- (void)updateForeignSymbolsPreservingOverridesInBlock:(CDUnknownBlockType)arg1;
- (void)removeShareableObjectsFromInstanceOverrides:(id)arg1;
- (id)images;
- (id)layerStyleWithID:(id)arg1;
- (id)textStyleWithID:(id)arg1;
- (id)allLayerStyles;
- (id)allTextStyles;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
- (void)purgeForeignObjects;
- (BOOL)purgeObjectsIn:(id)arg1 notReferencedIn:(id)arg2;
- (id)sharedObjectReferencesInDocument;
- (void)addReferencedObjectsWithin:(id)arg1 toSet:(id)arg2;
- (void)enumerateForeignObjects:(id)arg1 withLibraries:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)libraryForForeignObject:(id)arg1 inLibraries:(id)arg2;
- (void)invalidateTextLayersAffectedByFontEmbedding:(id)arg1;
- (id)embeddedFontChangesSince:(id)arg1;
- (id)symbolInstancesNestedInsideMasters:(id)arg1;
- (void)enumerateNonNestedSymbolInstancesUsingBlock:(CDUnknownBlockType)arg1;
- (void)invalidateAffectedSymbolInstances;
- (void)addSymbolMaster:(id)arg1;
- (id)symbolWithID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *symbolMap; // @synthesize symbolMap=_symbolMap;
- (id)allForeignObjects;
- (id)allSymbols;
- (id)localSymbols;
- (id)allArtboards;
- (void)populateDictionary:(id)arg1 withChildrenOf:(id)arg2;
- (id)layersByObjectID;
- (id)artboardWithID:(id)arg1;
- (id)layerWithID:(id)arg1;
- (id)selectedLayers;
- (BOOL)documentIsEmpty;
- (void)fixDuplicateArtboardObjectIDs;
- (id)nameForNewPage;
- (id)symbolsPageOrCreateIfNecessary;
- (id)symbolsPage;
- (id)addBlankPage;
- (void)removePages:(id)arg1 detachInstances:(BOOL)arg2;
@property(retain, nonatomic) MSPage *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)documentData;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)objectDidInit;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitEmptyObject;
- (void)setPatchInfo:(id)arg1;
- (void)resetPatchInfo;
- (void)resetStateContainerWithNewState:(id)arg1;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (id)defaultPagesArray;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)enumerateColorUpdateablesIn:(id)arg1 using:(CDUnknownBlockType)arg2;
- (void)enumerateColorUpdateables:(CDUnknownBlockType)arg1;
- (id)layerEnumeratorAvoidingFaultingWithOptions:(unsigned long long)arg1;
- (id)layerEnumeratorAvoidingFaultingWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)acknowledgeAllMissingForeignFonts;
- (void)correctInvalidGamma;
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
- (id)exportableImmutableCopy;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentDataMetadataCopy;
- (void)replaceFonts:(id)arg1;
- (void)invalidateFonts;
- (id)metadataForKey:(id)arg1 object:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 object:(id)arg3;
- (id)UIMetadataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly) Class superclass;

@end

