#import "_MSDocumentData.h"

#import "MSArrayDelegate.h"
#import "MSLayerContainment.h"
#import "MSSharedObjectContainerDelegate.h"

@class MSImageCollection, MSPage, NSArray, NSString, NSUndoManager;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSArrayDelegate, MSSharedObjectContainerDelegate>
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
- (void)immediatelyShowSelectionForLayer:(id)arg1;
- (void)temporarilyHideSelectionForLayer:(id)arg1;
- (void)purgeUnusedImages;
- (BOOL)wasSavedByTestVersion;
- (BOOL)wasSavedByOldVersion;
- (void)setEnableSliceInteraction:(BOOL)arg1;
- (void)setEnableLayerInteraction:(BOOL)arg1;
@property(readonly, nonatomic) MSImageCollection *images;
- (id)rootLayersForShareadObjectContainer:(id)arg1 includingSymbols:(BOOL)arg2;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
- (void)enumerateSharedObjectContainers:(CDUnknownBlockType)arg1;
- (BOOL)syncSharedObjects:(id)arg1;
- (id)layerWithID:(id)arg1;
- (id)layersSharingStyle:(id)arg1;
- (void)layerTreeLayoutDidChange;
- (void)deselectAllLayers;
- (void)changeSelectionTo:(id)arg1;
- (void)closeParentGroupsIfRequired:(id)arg1;
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
- (void)objectDidInit;
- (id)defaultPagesArray;
- (id)imageHashes;
- (void)addImageOwnersToSet:(id)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (void)migratePropertiesFromV54OrEarlierWithCoder:(id)arg1;
- (id)usedFontNames;
- (void)trackColors:(id)arg1;
- (id)colorFinderQueue;
- (void)findFrequentColorsWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

