//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <BCLayerList/NSMenuDelegate-Protocol.h>

@class BCOutlineView, BCSidebarPreviewImageView, BCTableRowView, MSLayoutConstraintCache, NSButton, NSPopUpButton, NSString, NSWindow;
@protocol BCOutlineViewNode, BCOutlineViewPopupConfigurator, BCTableCellViewDelegate;

@interface BCTableCellView : NSTableCellView <NSMenuDelegate>
{
    BOOL _lastUpdatedTextWasEditing;
    BOOL _isShowingImages;
    MSLayoutConstraintCache *_constraintCache;
    id <BCTableCellViewDelegate> _delegate;
    unsigned long long _displayState;
    NSButton *_lockHideButton;
    NSPopUpButton *_booleanOpPopUpButton;
    id <BCOutlineViewPopupConfigurator> _badgeConfigurator;
    unsigned long long _lastUpdateSelectionState;
    long long _lastUpdatedPreviewState;
    id _previewImmutable;
    BCSidebarPreviewImageView *_previewView;
    BCSidebarPreviewImageView *_maskPreviewView;
    double _designedTextFieldTopPadding;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isShowingImages; // @synthesize isShowingImages=_isShowingImages;
@property(readonly, nonatomic) double designedTextFieldTopPadding; // @synthesize designedTextFieldTopPadding=_designedTextFieldTopPadding;
@property(nonatomic) __weak BCSidebarPreviewImageView *maskPreviewView; // @synthesize maskPreviewView=_maskPreviewView;
@property(nonatomic) __weak BCSidebarPreviewImageView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) BOOL lastUpdatedTextWasEditing; // @synthesize lastUpdatedTextWasEditing=_lastUpdatedTextWasEditing;
@property(nonatomic) __weak id previewImmutable; // @synthesize previewImmutable=_previewImmutable;
@property(nonatomic) long long lastUpdatedPreviewState; // @synthesize lastUpdatedPreviewState=_lastUpdatedPreviewState;
@property(nonatomic) unsigned long long lastUpdateSelectionState; // @synthesize lastUpdateSelectionState=_lastUpdateSelectionState;
@property(retain, nonatomic) id <BCOutlineViewPopupConfigurator> badgeConfigurator; // @synthesize badgeConfigurator=_badgeConfigurator;
@property(nonatomic) __weak NSPopUpButton *booleanOpPopUpButton; // @synthesize booleanOpPopUpButton=_booleanOpPopUpButton;
@property(nonatomic) __weak NSButton *lockHideButton; // @synthesize lockHideButton=_lockHideButton;
@property(nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
@property(nonatomic) __weak id <BCTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelOperation:(id)arg1;
@property(readonly, nonatomic) NSWindow *destinationWindow;
- (void)drawDragImageInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double widthForDragImage;
- (void)enableBadgesAfterTextEditingEnded;
- (void)enableBadges;
- (void)disableBadges;
- (void)renameNode;
@property(readonly, nonatomic) BOOL isTextFieldEditing;
- (void)updateConstraints;
- (void)updateMaskIcon;
- (void)updatePreviewIconIfRequired;
- (unsigned long long)currentPreviewState;
- (BOOL)shouldDrawAsActive;
@property(readonly, nonatomic) BCTableRowView *rowView;
@property(readonly, nonatomic) BCOutlineView *outlineView;
- (struct NSEdgeInsets)verticalInsets;
- (void)handleBadgePressed:(id)arg1;
- (void)updateBooleanOpPopUpButtonIfNeeded;
- (void)updateLockHideButtonIfNeeded;
- (id)badgeTrailingSpaceConstraint;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)resolveCellViewContainingLocationOfEvent:(id)arg1;
- (BOOL)isEventCurrent:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)stopObserving;
- (void)refreshCellContents:(id)arg1;
- (void)refreshPreviewImages:(id)arg1;
- (BOOL)isOpaque;
- (void)setBackgroundStyle:(long long)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateCellStyle;
- (void)refreshTextColor;
- (void)updateTextBackgroundStyle;
- (void)updateSelectionStateIfRequired;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) id <BCOutlineViewNode> node;
@property(readonly, nonatomic) BOOL isNodeLocked;
@property(readonly, nonatomic) BOOL isNodeContainedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL canNodeBeHidden;
@property(readonly, nonatomic) BOOL isNodeHidden;
@property(readonly, nonatomic) BOOL isNodeSelected;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (void)awakeFromNib;
@property(readonly, nonatomic) MSLayoutConstraintCache *constraintCache; // @synthesize constraintCache=_constraintCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

