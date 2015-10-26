#import "NSTableCellView.h"

#import "NSMenuDelegate.h"

@class CALayer, NSString, NSView;

@interface MSPagesPopoverCell : NSTableCellView <NSMenuDelegate>
{
    NSView *_placeholderImageView;
    id <MSPagesPopoverCellDelegate> _delegate;
    id _pageObjectID;
    CALayer *_imageLayer;
    CALayer *_selectionLayer;
}

@property(retain, nonatomic) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(copy, nonatomic) id pageObjectID; // @synthesize pageObjectID=_pageObjectID;
@property(nonatomic) __weak id <MSPagesPopoverCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)pageNameEditAction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (id)layerForSelectionHighlight:(id)arg1;
- (void)deletePage:(id)arg1;
- (void)duplicatePage:(id)arg1;
- (void)renamePage:(id)arg1;
- (void)removeCellHighlight;
- (void)highlightCell;
- (void)menuDidClose:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

