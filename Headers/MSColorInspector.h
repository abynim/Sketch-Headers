//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "BCPopoverDelegate-Protocol.h"
#import "MSColorInspectorSectionDelegate-Protocol.h"
#import "MSColorPickerViewControllerDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "_TtP6Sketch22MSSwatchEditorDelegate_-Protocol.h"
#import "_TtP6Sketch22MSSwatchPickerDelegate_-Protocol.h"
#import "_TtP6Sketch35MSColorModePickerControllerDelegate_-Protocol.h"

@class MSColorInspectorSectionColor, MSColorInspectorSectionGradient, MSColorInspectorSectionPattern, MSColorPickerViewController, MSDocument, MSEventHandlerManager, MSLibraryAssetCollectionsController, MSPersistentAssetCollection, MSStackView, NSArray, NSString, NSTextField, _TtC17SketchControllers26MSModelObjectChangeTracker, _TtC6Sketch27MSColorModePickerController, _TtC6Sketch28MSColorInspectorSwatchPicker, _TtC6Sketch33MSColorInspectorSwatchColorEditor;
@protocol MSColorInspectorDelegate;

@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, BCPopoverDelegate, NSTouchBarDelegate, MSStylePartPreviewButtonDelegate, MSColorPickerViewControllerDelegate, _TtP6Sketch35MSColorModePickerControllerDelegate_, _TtP6Sketch22MSSwatchPickerDelegate_, _TtP6Sketch22MSSwatchEditorDelegate_>
{
    BOOL _displayingDiverseStyles;
    BOOL _isStacking;
    BOOL _creatingVariable;
    BOOL _pickingVariable;
    BOOL _disableCommandKeyDismissal;
    id <MSColorInspectorDelegate> _delegate;
    MSColorPickerViewController *_colorPickerController;
    _TtC6Sketch27MSColorModePickerController *_colorModePickerController;
    MSColorInspectorSectionColor *_colorSection;
    MSColorInspectorSectionGradient *_gradientSection;
    MSColorInspectorSectionPattern *_patternSection;
    _TtC6Sketch28MSColorInspectorSwatchPicker *_swatchColorPicker;
    _TtC6Sketch33MSColorInspectorSwatchColorEditor *_swatchColorEditor;
    MSEventHandlerManager *_eventHandlerManager;
    MSDocument *_document;
    MSPersistentAssetCollection *_globalAssets;
    MSStackView *_stackView;
    MSLibraryAssetCollectionsController *_libraryAssetsController;
    long long _gradientType;
    NSTextField *_textFieldToContinueEditing;
    _TtC17SketchControllers26MSModelObjectChangeTracker *_changeTracker;
}

+ (id)presentColorInspectorPopoverForViewController:(id)arg1 delegate:(id)arg2 document:(id)arg3 globalAssets:(id)arg4 relativeToView:(id)arg5 setupHandler:(CDUnknownBlockType)arg6;
+ (id)presentColorInspectorPopoverWithDelegate:(id)arg1 document:(id)arg2 globalAssets:(id)arg3 relativeToView:(id)arg4 setupHandler:(CDUnknownBlockType)arg5;
+ (id)presentColorInspectorPopoverForViewController:(id)arg1 document:(id)arg2 globalAssets:(id)arg3 relativeToView:(id)arg4 setupHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) BOOL disableCommandKeyDismissal; // @synthesize disableCommandKeyDismissal=_disableCommandKeyDismissal;
@property(retain, nonatomic) _TtC17SketchControllers26MSModelObjectChangeTracker *changeTracker; // @synthesize changeTracker=_changeTracker;
@property(nonatomic) __weak NSTextField *textFieldToContinueEditing; // @synthesize textFieldToContinueEditing=_textFieldToContinueEditing;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) BOOL pickingVariable; // @synthesize pickingVariable=_pickingVariable;
@property(nonatomic) BOOL creatingVariable; // @synthesize creatingVariable=_creatingVariable;
@property(nonatomic) BOOL isStacking; // @synthesize isStacking=_isStacking;
@property(retain, nonatomic) MSLibraryAssetCollectionsController *libraryAssetsController; // @synthesize libraryAssetsController=_libraryAssetsController;
@property(retain, nonatomic) MSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) BOOL displayingDiverseStyles; // @synthesize displayingDiverseStyles=_displayingDiverseStyles;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) _TtC6Sketch33MSColorInspectorSwatchColorEditor *swatchColorEditor; // @synthesize swatchColorEditor=_swatchColorEditor;
@property(retain, nonatomic) _TtC6Sketch28MSColorInspectorSwatchPicker *swatchColorPicker; // @synthesize swatchColorPicker=_swatchColorPicker;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(retain, nonatomic) _TtC6Sketch27MSColorModePickerController *colorModePickerController; // @synthesize colorModePickerController=_colorModePickerController;
@property(retain, nonatomic) MSColorPickerViewController *colorPickerController; // @synthesize colorPickerController=_colorPickerController;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchBarColorAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)customTouchBarItemIdentifiers;
- (id)makeTouchBar;
- (double)minimumPopoverContentViewHeight:(id)arg1;
- (id)popoverWillReturnUndoManager:(id)arg1;
- (BOOL)popoverShouldTrackSuperviewOfAttachedToView:(id)arg1;
- (void)adjustInspectorToColorPopoverIfNeeded:(id)arg1;
- (void)popoverWindowDidMove:(id)arg1;
- (void)popoverWindowSizeDidChange:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)modeDidChangeToFillType:(unsigned long long)arg1 gradientType:(long long)arg2;
- (void)reloadTouchBarsAfterSelectionChange:(id)arg1;
- (void)reloadTouchBars;
- (void)revertToDefaultFirstResponder;
- (void)adjustFirstResponder;
- (void)refreshTabbingCycle;
- (void)setColorMode:(unsigned long long)arg1 gradientStyle:(long long)arg2;
@property(readonly, nonatomic) unsigned long long fillType;
- (void)swatchEditorWithInspector:(id)arg1 didFinishEditing:(id)arg2;
- (void)swatchPickerWithInspector:(id)arg1 startEditing:(id)arg2;
- (void)swatchPickerWithInspector:(id)arg1 didSelect:(id)arg2;
- (void)showSwatches:(id)arg1;
- (void)createSwatchColor:(id)arg1;
- (void)colorModeController:(id)arg1 didChangeFillType:(unsigned long long)arg2 gradientType:(long long)arg3;
- (void)refreshIfNecessary:(id)arg1;
- (id)filteredStyleParts:(id)arg1;
- (void)reflectEffectiveStyleParts;
- (BOOL)stylesHaveMixedColors:(id)arg1;
@property(copy, nonatomic) NSArray *styleParts;
- (void)close;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)subviewsChangedInColorPickerController:(id)arg1;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)colorPickerController:(id)arg1 colorDidChange:(id)arg2;
- (void)setColorWithoutNotifying:(id)arg1;
- (void)setColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (id)stylePartPreviewButtonPreviewColorSpace:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)documentRedoAction;
- (id)documentUndoAction;
- (void)viewWillDisappear;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)colorForCurrentSection;
- (id)currentSection;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findFrequentImages;
- (void)findFrequentColors;
- (void)findFrequentObjects;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (void)dismissIfCommandKeyDown;
- (void)inspectorSectionDidUpdate:(id)arg1;
- (id)documentAssets;
- (void)didRemoveAssetOfType:(unsigned long long)arg1;
- (void)didAddAsset:(id)arg1;
- (void)setModePickerInitialMode;
- (void)updateModePickerForCurrentStyles;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSender:(id)arg1 document:(id)arg2 handlerManager:(id)arg3 globalAssets:(id)arg4;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

