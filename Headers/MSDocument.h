//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import "BCColorPickerDocument-Protocol.h"
#import "BCSideBarViewControllerDelegate-Protocol.h"
#import "MSCloudExportableDocument-Protocol.h"
#import "MSComponentsPanelDelegate-Protocol.h"
#import "MSDocumentDataDelegate-Protocol.h"
#import "MSEventHandlerManagerDelegate-Protocol.h"
#import "MSMenuBuilderDelegate-Protocol.h"
#import "MSSidebarControllerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "_TtP11SketchModel26MSEditingContextSubscriber_-Protocol.h"

@class BCSideBarViewController, MSActionController, MSArtboardGroup, MSAssetLibraryController, MSAssistantsConfiguration, MSBackButtonController, MSBadgeController, MSCacheManager, MSCanvasView, MSCanvasViewController, MSComponentInspectorDriver, MSComponentsPanelController, MSDocumentCanvasPreferencePane, MSDocumentChangeNotifier, MSDocumentData, MSDocumentFontsViewController, MSDocumentSettingsPane, MSDocumentWindow, MSDocumentWindowController, MSEventHandlerManager, MSHistoryMaker, MSImmutableDocumentData, MSInspectorController, MSMainSplitViewController, MSMetadataConfiguration, MSToolbarConstructor, NSArray, NSColorSpace, NSDictionary, NSMutableDictionary, NSResponder, NSString, NSTimer, NSURL, NSView, SCKProject, SCKShare, SCKWorkspace, _TtC10Assistants20AssistantsRunResults, _TtC11SketchModel16MSEditingContext, _TtC11SketchModel20MSInfluenceRectCache, _TtC11SketchModel21MSDetachedSymbolCache, _TtC13SharedEditing18MSCoEditController, _TtC14SketchCloudKit23SubscriptionsController, _TtC6Sketch22MSInsertMenuController, _TtC6Sketch23MSDocumentChangeCounter, _TtC6Sketch24MSDocumentEditController, _TtC6Sketch30MSCoEditHealthStatusController;

@interface MSDocument : NSDocument <MSCloudExportableDocument, _TtP11SketchModel26MSEditingContextSubscriber_, MSComponentsPanelDelegate, NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSEventHandlerManagerDelegate, MSDocumentDataDelegate, MSMenuBuilderDelegate, MSSidebarControllerDelegate, BCSideBarViewControllerDelegate, BCColorPickerDocument>
{
    BOOL _hideDocumentsWindowWhenDisplayingWindow;
    BOOL _attemptingToClose;
    BOOL _nextReadFromURLIsReload;
    BOOL _hasOpenedImageFile;
    BOOL _nextSaveShouldCreateVersionOnCloud;
    BOOL _nextSaveShouldPublishVersionOnCloud;
    BOOL _nextSaveAsShouldKeepDocumentID;
    BOOL _isSidebarVisible;
    BOOL _isLayerListVisible;
    BOOL _isComponentsPanelVisible;
    BOOL _cacheFlushInProgress;
    BOOL _isAssistantsFirstRun;
    _TtC6Sketch22MSInsertMenuController *_insertMenuController;
    NSArray *_exportableLayerSelection;
    MSDocumentWindowController *_documentWindowController;
    NSView *_messageView;
    MSToolbarConstructor *_toolbarConstructor;
    MSActionController *_actionsController;
    MSBadgeController *_badgeController;
    MSAssistantsConfiguration *_assistantsConfiguration;
    MSDocumentData *_documentData;
    _TtC6Sketch23MSDocumentChangeCounter *_documentChangeCounter;
    MSDocumentChangeNotifier *_changeNotifier;
    _TtC11SketchModel21MSDetachedSymbolCache *_detachedSymbolCache;
    _TtC11SketchModel20MSInfluenceRectCache *_influenceRectCache;
    MSEventHandlerManager *_eventHandlerManager;
    MSCacheManager *_cacheManager;
    MSComponentsPanelController *_componentsPanelController;
    MSCanvasViewController *_currentContentViewController;
    _TtC6Sketch30MSCoEditHealthStatusController *_coEditHealthStatusController;
    id _colorSpaceMismatchWarning;
    id _editingLibraryWarning;
    _TtC10Assistants20AssistantsRunResults *_assistantsResults;
    _TtC6Sketch24MSDocumentEditController *_editController;
    _TtC13SharedEditing18MSCoEditController *_coEditController;
    _TtC14SketchCloudKit23SubscriptionsController *_subscriptionsController;
    unsigned long long _contentType;
    NSTimer *_cloudAutosaveTimer;
    _TtC11SketchModel16MSEditingContext *_editingContext;
    double _mostRecentCacheFlushingTime;
    NSMutableDictionary *_mutableUIMetadata;
    MSBackButtonController *_backButtonController;
    NSMutableDictionary *_originalViewportsForEditedSymbols;
    NSArray *_previousSelectedLayers;
    MSComponentInspectorDriver *_componentInspectorDriver;
    MSArtboardGroup *_focusedArtboard;
    id _assistantsObserverObject;
    id _componentsObserverObject;
    NSTimer *_cacheFlushTimer;
}

+ (id)localObjectForObjectReference:(id)arg1 documentData:(id)arg2 isForeign:(BOOL)arg3;
+ (id)currentDocument;
+ (void)cleanCloudDirectoriesRemovingAllDocuments:(BOOL)arg1;
+ (id)didCleanCloudDirectoriesNotification;
+ (id)documentWithCloudShareID:(id)arg1;
+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
+ (BOOL)autosavesInPlace;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *cacheFlushTimer; // @synthesize cacheFlushTimer=_cacheFlushTimer;
@property(nonatomic) BOOL isAssistantsFirstRun; // @synthesize isAssistantsFirstRun=_isAssistantsFirstRun;
@property(readonly, nonatomic) id componentsObserverObject; // @synthesize componentsObserverObject=_componentsObserverObject;
@property(readonly, nonatomic) id assistantsObserverObject; // @synthesize assistantsObserverObject=_assistantsObserverObject;
@property(nonatomic) __weak MSArtboardGroup *focusedArtboard; // @synthesize focusedArtboard=_focusedArtboard;
@property(retain, nonatomic) MSComponentInspectorDriver *componentInspectorDriver; // @synthesize componentInspectorDriver=_componentInspectorDriver;
@property(copy, nonatomic) NSArray *previousSelectedLayers; // @synthesize previousSelectedLayers=_previousSelectedLayers;
@property(retain, nonatomic) NSMutableDictionary *originalViewportsForEditedSymbols; // @synthesize originalViewportsForEditedSymbols=_originalViewportsForEditedSymbols;
@property(retain, nonatomic) MSBackButtonController *backButtonController; // @synthesize backButtonController=_backButtonController;
@property(retain, nonatomic) NSMutableDictionary *mutableUIMetadata; // @synthesize mutableUIMetadata=_mutableUIMetadata;
@property BOOL cacheFlushInProgress; // @synthesize cacheFlushInProgress=_cacheFlushInProgress;
@property double mostRecentCacheFlushingTime; // @synthesize mostRecentCacheFlushingTime=_mostRecentCacheFlushingTime;
@property(readonly, nonatomic) _TtC11SketchModel16MSEditingContext *editingContext; // @synthesize editingContext=_editingContext;
@property(nonatomic) BOOL isComponentsPanelVisible; // @synthesize isComponentsPanelVisible=_isComponentsPanelVisible;
@property(nonatomic) BOOL isLayerListVisible; // @synthesize isLayerListVisible=_isLayerListVisible;
@property(nonatomic) BOOL isSidebarVisible; // @synthesize isSidebarVisible=_isSidebarVisible;
@property(retain, nonatomic) NSTimer *cloudAutosaveTimer; // @synthesize cloudAutosaveTimer=_cloudAutosaveTimer;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) BOOL nextSaveAsShouldKeepDocumentID; // @synthesize nextSaveAsShouldKeepDocumentID=_nextSaveAsShouldKeepDocumentID;
@property(nonatomic) BOOL nextSaveShouldPublishVersionOnCloud; // @synthesize nextSaveShouldPublishVersionOnCloud=_nextSaveShouldPublishVersionOnCloud;
@property(nonatomic) BOOL nextSaveShouldCreateVersionOnCloud; // @synthesize nextSaveShouldCreateVersionOnCloud=_nextSaveShouldCreateVersionOnCloud;
@property(readonly, nonatomic) _TtC14SketchCloudKit23SubscriptionsController *subscriptionsController; // @synthesize subscriptionsController=_subscriptionsController;
@property(retain, nonatomic) _TtC13SharedEditing18MSCoEditController *coEditController; // @synthesize coEditController=_coEditController;
@property(retain, nonatomic) _TtC6Sketch24MSDocumentEditController *editController; // @synthesize editController=_editController;
@property(retain, nonatomic) _TtC10Assistants20AssistantsRunResults *assistantsResults; // @synthesize assistantsResults=_assistantsResults;
@property(retain, nonatomic) id editingLibraryWarning; // @synthesize editingLibraryWarning=_editingLibraryWarning;
@property(retain, nonatomic) id colorSpaceMismatchWarning; // @synthesize colorSpaceMismatchWarning=_colorSpaceMismatchWarning;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
@property(nonatomic) BOOL nextReadFromURLIsReload; // @synthesize nextReadFromURLIsReload=_nextReadFromURLIsReload;
@property(retain, nonatomic) _TtC6Sketch30MSCoEditHealthStatusController *coEditHealthStatusController; // @synthesize coEditHealthStatusController=_coEditHealthStatusController;
@property(retain, nonatomic) MSCanvasViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(retain, nonatomic) MSComponentsPanelController *componentsPanelController; // @synthesize componentsPanelController=_componentsPanelController;
@property(readonly, nonatomic) MSCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) _TtC11SketchModel20MSInfluenceRectCache *influenceRectCache; // @synthesize influenceRectCache=_influenceRectCache;
@property(retain, nonatomic) _TtC11SketchModel21MSDetachedSymbolCache *detachedSymbolCache; // @synthesize detachedSymbolCache=_detachedSymbolCache;
@property(readonly, nonatomic) MSDocumentChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(retain, nonatomic) _TtC6Sketch23MSDocumentChangeCounter *documentChangeCounter; // @synthesize documentChangeCounter=_documentChangeCounter;
@property(nonatomic, getter=isAttemptingToClose) BOOL attemptingToClose; // @synthesize attemptingToClose=_attemptingToClose;
@property(readonly, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSAssistantsConfiguration *assistantsConfiguration; // @synthesize assistantsConfiguration=_assistantsConfiguration;
@property(retain, nonatomic) MSBadgeController *badgeController; // @synthesize badgeController=_badgeController;
@property(nonatomic) BOOL hideDocumentsWindowWhenDisplayingWindow; // @synthesize hideDocumentsWindowWhenDisplayingWindow=_hideDocumentsWindowWhenDisplayingWindow;
@property(retain, nonatomic) MSActionController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor=_toolbarConstructor;
@property(retain, nonatomic) NSView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) MSDocumentWindowController *documentWindowController; // @synthesize documentWindowController=_documentWindowController;
- (void)updateAssistants;
@property(readonly, nonatomic) MSMetadataConfiguration *metadataConfiguration;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)updateFocusedArtboard:(id)arg1;
- (void)installedFontsDidChange;
- (void)returnToDefaultFirstResponder;
- (id)previewColorSpaceForItem:(id)arg1;
- (void)warnIfPluginsDisabled;
- (void)warnIfEditingLibrary;
@property(readonly, nonatomic) BOOL isLibraryDocument;
- (void)showNonDefaultColorSpaceWarningIfApplicable;
- (id)shareableObjectReferenceForObject:(id)arg1;
- (id)shareableObjectReferenceForDescriptor:(id)arg1;
- (id)localObjectForObjectReference:(id)arg1;
- (BOOL)isSharableObjectReferenceForeign:(id)arg1;
- (BOOL)isMatchToLibrary:(id)arg1;
- (void)eventHandlerManager:(id)arg1 didChangeCurrentHandler:(id)arg2;
- (void)componentsPanelWillBeginDraggingSession:(id)arg1;
- (void)componentsPanel:(id)arg1 didSelectComponent:(id)arg2;
- (void)refreshWindowBadge;
- (void)reloadTouchBars;
- (void)libraryControllerDidChange:(id)arg1;
@property(nonatomic) BOOL pageListCollapsed;
- (void)setPageListHeight:(double)arg1 isUserInitiated:(BOOL)arg2;
@property(readonly, nonatomic) double pageListHeight;
- (id)inactiveSelectedTabIndicatorColor;
- (id)activeSelectedTabIndicatorColor;
- (id)sidebarViewController:(id)arg1 viewControllerForSidebarTabIdentifier:(id)arg2;
- (id)tabConfigurationsForSidebarViewController:(id)arg1;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;
- (id)documentData:(id)arg1 metadataForKey:(id)arg2 object:(id)arg3;
- (void)documentData:(id)arg1 storeMetadata:(id)arg2 forKey:(id)arg3 object:(id)arg4;
@property(copy, nonatomic) NSDictionary *UIMetadata;
- (void)setFileURL:(id)arg1;
- (void)openLibrariesForForeignObjects:(id)arg1;
- (void)revealLayerWithID:(id)arg1;
- (void)visitSymbolMasterWithID:(id)arg1;
- (void)visitSymbolMaster:(id)arg1 withReturnInstance:(id)arg2;
- (void)removeViewportForArtboard:(id)arg1;
- (BOOL)canRestoreViewportAfterArtboardEdit:(id)arg1;
- (void)restoreViewportAfterArtboardEdit:(id)arg1;
- (void)storeViewport:(id)arg1 andInstance:(id)arg2 forArtboard:(id)arg3;
- (void)highlightHoverableItem:(id)arg1;
- (void)hoveredItemDidChange:(id)arg1;
- (void)documentData:(id)arg1 layerDidChangeStyle:(id)arg2;
- (void)flagsChangedNotification:(id)arg1;
- (BOOL)layerHasHoverStateInCanvas:(id)arg1;
- (void)sidebarController:(id)arg1 hoveredLayerDidChangeTo:(id)arg2;
- (id)sidebarControllerContextMenuItemsForCurrentSelection:(id)arg1;
- (void)sidebarController:(id)arg1 validateRemovalOfPages:(id)arg2 withRemovalBlock:(CDUnknownBlockType)arg3;
- (void)sidebarController:(id)arg1 didChangeSelection:(id)arg2;
- (void)sidebarControllerDidUpdate:(id)arg1;
- (void)refreshComponentsPanel:(id)arg1;
- (void)refreshLayerListIfNecessary:(id)arg1;
- (void)refreshSupplementaryViews:(id)arg1;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)editingContext:(id)arg1 didChange:(id)arg2;
- (void)debugRunJSAPIUnitTests:(id)arg1;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (id)addBlankPage;
- (void)toggleClickThrough:(id)arg1;
- (BOOL)isInspectorVisible;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (BOOL)isRulersVisible;
- (id)pages;
- (id)layerStyles;
- (void)renamePage;
- (void)setCurrentPage:(id)arg1;
- (id)artboards;
- (id)normalHandler;
- (id)toggleHandlerClass:(Class)arg1;
- (void)reloadInspector;
- (void)refreshOverlay;
- (void)deleteSymbolMasters:(id)arg1;
- (id)actionForMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refreshWindowBadgeIfNecessary:(id)arg1;
@property(readonly, nonatomic) MSHistoryMaker *historyMaker;
- (id)changeCountTokenForSaveOperation:(unsigned long long)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)updateSelectionFollowingChangeToImmutableDocumentData;
- (void)reloadEverythingFollowingDocumentDataChange;
- (void)flushCaches;
- (void)flushCachesIfNecessary;
- (void)scheduleCacheFlush;
- (void)zoomValueDidChange;
- (struct CGRect)visibleCanvasRectForDocumentData:(id)arg1;
- (void)performPageSwitchUpdates;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (BOOL)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(struct CGPoint)arg3 withPasteboard:(id)arg4;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)windowDidResize:(id)arg1;
- (BOOL)allowsDocumentSharing;
- (void)validateMenuItemTitleAndState:(id)arg1;
- (BOOL)hasArtboards;
- (void)validateToolbarItems;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)putSelectionBackInCanvasIfPossible;
- (void)performSelectionChangedUpdates;
- (void)updateSelectionAfterRemovingObjects:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)selectedLayers;
- (id)makeUnknownRenameError;
- (void)moveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)subviewOfView:(id)arg1 className:(id)arg2;
- (id)toolbarWindow;
- (id)viewForPopoverOnWindow:(id)arg1;
- (void)renameDocument:(id)arg1;
- (void)moveDocument:(id)arg1;
- (id)currentPage;
- (void)exportSliceLayers:(id)arg1;
@property(retain, nonatomic) NSArray *exportableLayerSelection; // @synthesize exportableLayerSelection=_exportableLayerSelection;
- (id)allExportableLayers;
- (void)returnToNormalHandler;
- (void)currentHandlerChanged;
- (id)currentHandler;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (id)toolbar;
- (void)showWindows;
- (void)refreshAfterAppearanceChange;
- (BOOL)colorPickerShouldSendEventsDuringMouseDrag:(id)arg1;
- (void)hideComponentsInspector;
- (void)showComponentsInspector;
- (void)hideRulersIfNecessary;
- (void)showCanvas;
- (void)showComponents;
- (id)inspectorViewControllersForLayers:(id)arg1 standardControllers:(id)arg2;
- (void)validateSelection:(id)arg1;
- (void)loadLayerListPanel;
@property(readonly, nonatomic) _TtC6Sketch22MSInsertMenuController *insertMenuController; // @synthesize insertMenuController=_insertMenuController;
- (id)swiftCompatibleComponentsPanelController;
- (id)newExportableImmutableData;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentData;
- (void)setDocumentData:(id)arg1 reset:(BOOL)arg2;
- (void)loadInspectorPanel;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)updateCountDownButton;
- (void)wireDocumentDataToUI;
@property(readonly, nonatomic) NSResponder *defaultFirstResponder;
@property(readonly, nonatomic) MSCanvasView *contentDrawView;
@property(readonly, nonatomic) MSCanvasView *canvasView;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)notifyIfDocumentResignedCurrent;
- (void)notifyIfDocumentBecameCurrent;
@property(readonly, nonatomic) BOOL isCurrent;
@property(readonly, nonatomic) BOOL isCloudDoc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (id)window;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)close;
- (void)setViewsToNil;
- (void)setViewControllersToNil;
- (void)setDelegatesToNil;
- (void)createActions;
@property(readonly, nonatomic) NSColorSpace *canvasColorSpace;
@property(readonly, nonatomic) NSColorSpace *documentColorSpace;
@property(readonly, nonatomic) NSColorSpace *colorSpace;
@property(readonly, nonatomic) MSInspectorController *inspectorController;
@property(readonly, nonatomic) BCSideBarViewController *sidebarController;
@property(readonly, nonatomic) MSMainSplitViewController *splitViewController;
@property(readonly, nonatomic) MSDocumentWindow *documentWindow;
- (void)updateWindowSubtitle;
- (void)setUp;
- (void)applyCorrectSizeForNewWindow:(id)arg1;
- (struct CGSize)defaultNewWindowSize;
- (void)makeWindowControllers;
- (id)init;
- (void)setupCoEditController;
@property(nonatomic, readonly) MSDocumentSettingsPane *currentDocumentSettingsPane;
@property(nonatomic, readonly) MSDocumentCanvasPreferencePane *canvasPreferencesPane;
@property(nonatomic, readonly) MSDocumentFontsViewController *fontsPreferencesPane;
- (id)showAssistantsPreferences;
- (id)showFontsPreferences;
- (id)showDocumentPreferencesTabWith:(id)arg1;
- (void)updateRecentSavingLocation;
@property(nonatomic, readonly) MSImmutableDocumentData *saveableDocument;
- (void)applyFontEmbeddingPresetsForWorkspace:(id)arg1;
- (void)updateUsedEmbeddableFontNames;
- (void)canCloseExecutedWithResult:(BOOL)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)shouldCloseWithDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)runAssistants;
- (void)runAssistantsAutomatically;
- (id)duplicateAndReturnError:(id *)arg1;
@property(readonly, nonatomic) SCKWorkspace *defaultWorkspace;
@property(retain, nonatomic) SCKProject *preferredProject;
@property(retain, nonatomic) SCKWorkspace *preferredWorkspace;
@property(retain, nonatomic) SCKShare *cloudShare;
- (id)cloudDocumentKey;
@property(readonly, nonatomic) NSString *cloudName;
- (void)updateLocalFileToMatchCloudNameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)displayName;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (void)showMessage:(id)arg1;
- (void)saveDocumentToURL:(id)arg1 saveMode:(unsigned long long)arg2 context:(id)arg3 callback:(id)arg4;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)saveExportRequest:(id)arg1 toFile:(id)arg2;
- (id)exportRequestWithName:(id)arg1 rect:(struct CGRect)arg2;
- (id)exportRequestForArtboardOrSlice:(id)arg1;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (id)pluginContext;
- (void)resetImportedDocument:(id)arg1;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (id)addLayerFromImageAtURL:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (BOOL)readDocumentFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readPDFFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readSVGFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)selectShareableObjectsIfVisible:(id)arg1;
- (void)revealShareableObject:(id)arg1;
- (void)revealComponentsOfType:(unsigned long long)arg1;
- (void)revealComponentsPanel;
- (void)revealLayerList;
- (void)handleGoToForeignSymbolInLibrary:(id)arg1;
- (BOOL)canGoToForeignSymbolInLibrary:(id)arg1;
- (void)handleEditForeignSymbol:(id)arg1 withInstance:(id)arg2;
- (void)handleEditForeignSymbol:(id)arg1;
- (void)handleForeignSymbolInstanceDoubleClick:(id)arg1;
- (void)handleUnlinkForeignSymbol:(id)arg1 withInstance:(id)arg2;
- (id)editForeignSymbolButtonsForLibrary:(id)arg1;
- (id)editForeignSymbolInfoTextForForeignSymbol:(id)arg1 inLibrary:(id)arg2;
- (id)editForeignSymbolMessageForLibrary:(id)arg1;
- (long long)availabilityForLibrary:(id)arg1;
- (void)saveDocumentToRandom:(id)arg1;
- (void)scheduleCoeditAutosave;
- (void)showCloudSaveOrRevertSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)backupFileURL;
- (void)reportSaveActionAtURL:(id)arg1 wasAutosave:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveCloudDocumentDraftAs:(id)arg1 workspace:(id)arg2 project:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (void)runModalSaveDraftCloudDocPanelForOperationType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)discardDraftDocumentWithError:(id *)arg1;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 allowDeletion:(BOOL)arg2 moveOriginal:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)saveDocumentAs:(id)arg1;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldCreateCloudVersionForSaveOperation:(unsigned long long)arg1 destinationType:(id)arg2 documentWasEdited:(BOOL)arg3;
- (void)prepareForSaveOperation:(unsigned long long)arg1;
- (id)actionClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

