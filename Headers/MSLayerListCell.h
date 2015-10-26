#import "PXListViewCell.h"

#import "NSTextFieldDelegate.h"

@class BCAutosizingTextField, MSLayer, MSLayerPreviewView, NSButton, NSImageView, NSPopUpButton, NSString;

@interface MSLayerListCell : PXListViewCell <NSTextFieldDelegate>
{
    BOOL mouseIsInside;
    BOOL _isVisible;
    BOOL _isHidden;
    MSLayer *_theLayer;
    long long _level;
    BCAutosizingTextField *_nameField;
    NSButton *_isVisibleButton;
    NSButton *_isLockedButton;
    NSButton *_isExpandedButton;
    MSLayerPreviewView *_previewView;
    NSPopUpButton *_booleanOpsButton;
    NSImageView *_sliceImageView;
}

+ (id)cellForItem:(id)arg1 inListView:(id)arg2;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) __weak NSImageView *sliceImageView; // @synthesize sliceImageView=_sliceImageView;
@property(nonatomic) __weak NSPopUpButton *booleanOpsButton; // @synthesize booleanOpsButton=_booleanOpsButton;
@property(nonatomic) __weak MSLayerPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak NSButton *isExpandedButton; // @synthesize isExpandedButton=_isExpandedButton;
@property(nonatomic) __weak NSButton *isLockedButton; // @synthesize isLockedButton=_isLockedButton;
@property(nonatomic) __weak NSButton *isVisibleButton; // @synthesize isVisibleButton=_isVisibleButton;
@property(nonatomic) __weak BCAutosizingTextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) MSLayer *theLayer; // @synthesize theLayer=_theLayer;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (BOOL)isMasked;
- (void)drawMaskDot;
- (void)drawNameFieldBorder;
- (BOOL)previousRowIsArtboard;
- (void)drawArtboardBackground:(struct CGRect)arg1;
- (BOOL)isDrawingArtboard;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isSelected;
- (void)nameAction:(id)arg1;
- (void)booleanAction:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)toggleLockedAction:(id)arg1;
- (void)toggleExpandedAction:(id)arg1;
- (void)setListView:(id)arg1;
- (id)listView;
- (void)controlTextDidChange:(id)arg1;
- (id)bitmapImageRepForCachingDisplayInRect:(struct CGRect)arg1;
- (BOOL)expandedButtonShouldBeVisible;
- (void)validateExpandedButton;
- (void)layoutControls;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideEyeButtonAndResizeNameField;
- (void)mouseExited:(id)arg1;
- (void)showEyeButtonAndResizeNameField;
- (id)rootDocument;
- (id)normalHandler;
- (void)mouseEntered:(id)arg1;
- (void)resizeNameFieldToFit;
- (void)renameLayer;
- (void)resizeNameFieldToMakeRoomForButtons;
- (void)adjustIcons;
- (void)selectionDidChange;
- (void)adjustNameFieldColor;
- (void)windowDidChangeFocus:(id)arg1;
- (BOOL)canShowEyeButton;
- (void)prepareForItem:(id)arg1;
- (void)centerPastedLayersOnLayer:(id)arg1;
- (void)pasteHere:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)undoNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

