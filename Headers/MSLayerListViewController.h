#import "NSViewController.h"

#import "MSSourceListViewDelegate.h"
#import "NSMenuDelegate.h"

@class MSDocument, MSLayerListConstructor, MSPage, MSSidebarViewController, MSSourceListView, NSArray, NSButton, NSPopUpButton, NSSearchField, NSString, NSView;

@interface MSLayerListViewController : NSViewController <MSSourceListViewDelegate, NSMenuDelegate>
{
    MSSourceListView *listView;
    MSLayerListConstructor *listMaker;
    BOOL ignoreNextSelectionChangeNotification;
    BOOL ignoreNextDocumentSelectionNotification;
    MSDocument *_document;
    NSPopUpButton *_pagesPopoverButton;
    NSView *_splitViewResizeView;
    NSSearchField *_layerSearchField;
    MSSidebarViewController *_sidebarViewController;
    NSButton *_includeLayersButton;
    NSButton *_includeSlicesButton;
    NSArray *_list;
    NSString *_layerContainerKey;
    NSButton *_showPagesListButton;
    MSPage *_currentPage;
}

@property(retain, nonatomic) MSPage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSButton *showPagesListButton; // @synthesize showPagesListButton=_showPagesListButton;
@property(copy, nonatomic) NSString *layerContainerKey; // @synthesize layerContainerKey=_layerContainerKey;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSButton *includeSlicesButton; // @synthesize includeSlicesButton=_includeSlicesButton;
@property(retain, nonatomic) NSButton *includeLayersButton; // @synthesize includeLayersButton=_includeLayersButton;
@property(nonatomic) __weak MSSidebarViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(nonatomic) __weak NSSearchField *layerSearchField; // @synthesize layerSearchField=_layerSearchField;
@property(retain, nonatomic) NSView *splitViewResizeView; // @synthesize splitViewResizeView=_splitViewResizeView;
@property(retain, nonatomic) NSPopUpButton *pagesPopoverButton; // @synthesize pagesPopoverButton=_pagesPopoverButton;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)currentView;
- (id)selectedLayersA;
- (id)selectedLayers;
- (void)findLayer:(id)arg1;
- (void)collapseGroupsInLayerList:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)editingDidEndDelayed;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)searchResultsForTerm:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1 matchingSearchTerm:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)switchToPage:(id)arg1;
- (void)reloadPagesMenu;
- (void)currentPageDidChange;
- (void)showPagesListButtonAction:(id)arg1;
- (void)dropPaths:(id)arg1 onPath:(id)arg2 atPosition:(unsigned long long)arg3;
- (void)dropPaths:(id)arg1 onShape:(id)arg2;
- (void)dropShapes:(id)arg1 onShape:(id)arg2;
- (void)dropLayers:(id)arg1 onGroup:(id)arg2;
- (void)insertLayer:(id)arg1 atPosition:(unsigned long long)arg2 ofLayer:(id)arg3;
- (void)dropLayers:(id)arg1 onLayer:(id)arg2 atPosition:(unsigned long long)arg3;
- (BOOL)listView:(id)arg1 acceptDrop:(id)arg2 row:(unsigned long long)arg3 dropHighlight:(unsigned long long)arg4;
- (unsigned long long)listView:(id)arg1 validateDrop:(id)arg2 proposedRow:(unsigned long long)arg3 proposedDropHighlight:(unsigned long long)arg4;
- (unsigned long long)dropTypeForDraggingIndexes:(id)arg1 onRow:(unsigned long long)arg2 withHighlight:(unsigned long long)arg3;
- (id)symbolIDsForLayers:(id)arg1;
- (BOOL)layersContainSymbols:(id)arg1;
- (BOOL)layer:(id)arg1 isDescendantOfLayerInArray:(id)arg2;
- (BOOL)layer:(id)arg1 isDescendantOfLayer:(id)arg2;
- (id)formatForDraggedLayer:(id)arg1;
- (void)scheduleExportOfLayer:(id)arg1 toPath:(id)arg2;
- (id)pathsForExportingLayersToPasteboard:(id)arg1;
- (BOOL)listView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)renameLayer:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)listView:(id)arg1 cellForRow:(unsigned long long)arg2;
- (double)listView:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInListView:(id)arg1;
- (BOOL)listView:(id)arg1 rowIsPartOfSymbol:(unsigned long long)arg2;
- (void)layerCellEditAction:(id)arg1;
- (id)listView:(id)arg1 actualSelectionIndexes:(id)arg2;
- (id)listView:(id)arg1 menuForEvent:(id)arg2;
- (void)setNumberOfSlicesLabel:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)coalescedReloadDataNotification:(id)arg1;
- (void)reloadData;
- (void)selectLayers:(id)arg1;
- (void)resizeRootOfGroupAndParents:(id)arg1;
- (void)listViewSelectionDidChange:(id)arg1;
- (BOOL)layerNameIsBeingEdited;
- (id)selectionIndexForSelectingItemsInLayerListBasedOnCanvasSelection;
- (void)selectItemsInLayerListBasedOnCanvasSelection;
- (BOOL)selectedLayerParentsChanged;
- (BOOL)anySelectedLayerNotCurrentlyVisibleInLayerList;
- (void)selectionDidChange;
- (void)prepareForDisplay;
- (void)unregisterObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

