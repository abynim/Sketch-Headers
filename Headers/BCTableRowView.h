#import "NSTableRowView.h"

@class NSColor, NSObject<BCOutlineViewDelegate>, NSObject<BCOutlineViewNode>, NSTableView;

@interface BCTableRowView : NSTableRowView
{
    NSTableView *_parent;
    NSObject<BCOutlineViewNode> *_node;
    NSObject<BCOutlineViewDelegate> *_delegate;
    unsigned long long _expansionState;
}

@property(nonatomic) unsigned long long expansionState; // @synthesize expansionState=_expansionState;
@property(retain, nonatomic) NSObject<BCOutlineViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<BCOutlineViewNode> *node; // @synthesize node=_node;
@property(retain, nonatomic) NSTableView *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)drawDisclosureTriangle;
@property(readonly, nonatomic) NSColor *borderColour;
@property(readonly, nonatomic) NSColor *highlightColour;
@property(readonly, nonatomic) NSColor *selectionBackgroundColour;
@property(readonly, nonatomic) NSColor *selectionForegroundColour;
@property(readonly, nonatomic) NSColor *alternateRowBackgroundColour;
@property(readonly, nonatomic) NSColor *rowBackgroundColour;
- (id)colourForItem:(SEL)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawDraggingDestinationFeedbackInRect:(struct CGRect)arg1;
- (BOOL)isSelected;
- (void)drawHighlight;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)fillBackgroundInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic, getter=isHighlit) BOOL hightlighted;
@property(readonly, nonatomic, getter=isNodeExpanded) BOOL nodeExpanded;
@property(readonly, nonatomic, getter=isNodeSelected) BOOL nodeSelected;
@property(readonly, nonatomic) BOOL isOdd;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;

@end

