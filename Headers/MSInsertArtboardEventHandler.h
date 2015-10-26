#import "MSInsertLayerEventHandler.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class MSEditArtboardPresetViewController, NSMutableArray, NSOutlineView, NSString;

@interface MSInsertArtboardEventHandler : MSInsertLayerEventHandler <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSOutlineView *_outlineView;
    NSMutableArray *_presets;
    MSEditArtboardPresetViewController *_editor;
}

@property(retain, nonatomic) MSEditArtboardPresetViewController *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) NSMutableArray *presets; // @synthesize presets=_presets;
@property(retain, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (id)insertArtboardWithRect:(struct CGRect)arg1;
- (struct CGRect)newPositionForFirstArtboardWithSize:(struct CGSize)arg1;
- (struct CGRect)initialRectForNewArtboard:(struct CGSize)arg1 besidesExistingArtboard:(id)arg2;
- (struct CGRect)newPositionForSecondArtboardWithSize:(struct CGSize)arg1;
- (struct CGRect)newPositionForArtboardWithSize:(struct CGSize)arg1;
- (id)rectOfSelectedLayers;
- (struct CGSize)sizeForPreset:(id)arg1;
- (void)insertArtboardFromPreset:(id)arg1;
- (void)focusCanvasOnAllArtboards;
- (void)insertPresetsFromItem:(id)arg1;
- (id)title;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (struct CGSize)sizeForItem:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)itemIsHeader:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)childrenForItem:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)animateEditorOut;
- (void)animateEditorIn;
- (void)editorDidFinish:(id)arg1;
- (void)showEditPanelForPreset:(id)arg1 canCancelPanel:(BOOL)arg2;
- (id)customPresetsSet;
- (void)addPresetAction:(id)arg1;
- (void)deletePresetItem:(id)arg1;
- (void)deleteRowAction:(id)arg1;
- (void)editRowAction:(id)arg1;
- (id)performActionWithRect:(id)arg1;
- (id)legacyPresetsPath;
- (id)presetsPath;
- (BOOL)shouldAddInsertFromSelectionItem;
- (void)loadArtboardPresets;
- (void)save;
- (void)copyPresetsToLibraryIfNecessary;
- (void)handlerWillLoseFocus;
- (void)reloadData;
- (unsigned long long)inspectorLocation;
- (id)nibName;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

