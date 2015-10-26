#import "_MSDocumentData.h"

#import "MSArrayDelegate.h"
#import "MSLayerContainment.h"

@class MSPage, NSArray, NSString, NSUndoManager;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSArrayDelegate>
{
    NSUndoManager *_undoManager;
    id <MSDocumentDataDelegate> _delegate;
    long long _savedVersion;
    NSString *_savedVariant;
    NSString *_savedBy;
}

+ (id)documentDataFromData:(id)arg1 version:(long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSString *savedBy; // @synthesize savedBy=_savedBy;
@property(retain, nonatomic) NSString *savedVariant; // @synthesize savedVariant=_savedVariant;
@property(nonatomic) long long savedVersion; // @synthesize savedVersion=_savedVersion;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (void)performUndoAction:(CDUnknownBlockType)arg1;
- (BOOL)wasSavedByTestVersion;
- (BOOL)wasSavedByOldVersion;
- (void)setEnableSliceInteraction:(BOOL)arg1;
- (void)setEnableLayerInteraction:(BOOL)arg1;
- (id)imagesInUse;
- (void)ensureAllPatternsAreInImageCollection;
- (void)removeDeletedSharedObjectsInstances;
- (id)rootLayersIncludingSymbols:(BOOL)arg1;
- (id)sharedObjectContainer:(unsigned long long)arg1;
- (id)layersSharingStyle:(id)arg1;
- (void)layerTreeLayoutDidChange;
- (void)deselectAllLayers;
- (id)selectedLayers;
- (id)pagesArray;
- (BOOL)documentIsEmpty;
- (void)sharedObjectDidChange:(struct MSModelObject *)arg1;
- (id)standardNameForLayer:(id)arg1;
- (void)dataArray:(id)arg1 didRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (id)nameForNewPage;
- (id)addBlankPage;
- (void)addPage:(id)arg1;
- (void)removePage:(id)arg1;
@property(retain, nonatomic) MSPage *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak NSArray *allPages;
- (void)dealloc;
- (id)documentData;
- (void)encodeWithCoder:(id)arg1;
- (void)objectDidInit;
- (id)defaultPagesArray;
- (BOOL)containsLayerOfClass:(Class)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)hasLayerSatisfyingTest:(CDUnknownBlockType)arg1;
- (id)firstLayerSatisfyingTest:(CDUnknownBlockType)arg1;
- (void)appendToArray:(id)arg1 layersSatisfyingTest:(CDUnknownBlockType)arg2;
- (id)layersSatisfyingTest:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsASingleLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (id)usedFontNames;
- (void)restoreBitmapLayers:(id)arg1 symbolBitmaps:(id)arg2 patternStyles:(id)arg3 fromCollection:(id)arg4;
- (id)itemsNeedingRelinkingInLayers:(id)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (id)patternStylesNeedingRelinkingInLayers:(id)arg1;
- (id)patternStylesNeedingRelinking;
- (id)bitmapsNeedingRelinkingInLayers:(id)arg1;
- (id)bitmapsNeedingRelinkingInSymbols;
- (id)allPatternStyles;
- (id)allBitmapLayers;
- (void)relinkPastedLayers:(id)arg1 withPastedImages:(id)arg2;
- (void)relinkImagesAndPatterns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

