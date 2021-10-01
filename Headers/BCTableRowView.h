//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class BCOutlineView, BCTableCellView, BCTableRowEffectBackgroundView, NSObject;
@protocol BCOutlineViewNode, BCTableRowViewDelegate;

@interface BCTableRowView : NSTableRowView
{
    unsigned long long _expansionTransitionState;
    BOOL _hadTopPaddingApplied;
    BOOL _hadBottomPaddingApplied;
    BOOL _needsHeightRefresh;
    BOOL _highlighted;
    BOOL _didLastDisplayAsHighlighted;
    BOOL _needsEffectBackgroundView;
    NSObject<BCOutlineViewNode> *_node;
    NSObject<BCTableRowViewDelegate> *_delegate;
    unsigned long long _expansionState;
    long long _backgroundStyle;
    BCTableRowEffectBackgroundView *_effectBackgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsEffectBackgroundView; // @synthesize needsEffectBackgroundView=_needsEffectBackgroundView;
@property(retain, nonatomic) BCTableRowEffectBackgroundView *effectBackgroundView; // @synthesize effectBackgroundView=_effectBackgroundView;
@property(readonly, nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) BOOL didLastDisplayAsHighlighted; // @synthesize didLastDisplayAsHighlighted=_didLastDisplayAsHighlighted;
@property(readonly, nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL needsHeightRefresh; // @synthesize needsHeightRefresh=_needsHeightRefresh;
@property(nonatomic) BOOL hadBottomPaddingApplied; // @synthesize hadBottomPaddingApplied=_hadBottomPaddingApplied;
@property(nonatomic) BOOL hadTopPaddingApplied; // @synthesize hadTopPaddingApplied=_hadTopPaddingApplied;
@property(nonatomic) unsigned long long expansionTransitionState; // @synthesize expansionTransitionState=_expansionTransitionState;
@property(nonatomic) unsigned long long expansionState; // @synthesize expansionState=_expansionState;
@property(nonatomic) __weak NSObject<BCTableRowViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<BCOutlineViewNode> *node; // @synthesize node=_node;
- (void)refreshRowLayout:(id)arg1;
- (void)relayoutNow;
@property(readonly, nonatomic) BCOutlineView *outlineView;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)setTargetForDropOperation:(BOOL)arg1;
- (void)drawDraggingDestinationFeedbackInRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)hasBottomPaddingApplied;
- (BOOL)hasTopPaddingApplied;
- (id)rowViewVisualsLayer;
- (BOOL)isArtboardRow;
- (BOOL)drawsBottomBorder;
- (BOOL)drawsTopBorder;
- (void)refreshSelectionState:(id)arg1;
- (void)viewWillDraw;
- (void)refreshBadgesAfterTextEditingEnded;
- (void)refreshSelectionState;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)updateLayer;
- (void)setFloating:(BOOL)arg1;
- (BOOL)wantsUpdateLayer;
- (long long)interiorBackgroundStyle;
@property(readonly, nonatomic) BCTableCellView *tableCellView;
- (void)setSelected:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long displayType;
- (BOOL)shouldDisplayAsHighlighted;
- (BOOL)isHighlighted;
- (void)highlightDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL isCurrentlyExpanding;
@property(readonly, nonatomic) BOOL isCurrentlyCollapsing;
@property(readonly, nonatomic, getter=isNodeExpanded) BOOL nodeExpanded;
- (BOOL)isNextNodeSelected;
- (BOOL)isPreviousNodeSelected;
- (BOOL)isHovered;
- (BOOL)isNodeSubselected;
@property(readonly, nonatomic, getter=isNodeSelected) BOOL nodeSelected;
- (BOOL)isInActiveOutlineView;
- (void)setBackgroundColor:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)didAddSubview:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

