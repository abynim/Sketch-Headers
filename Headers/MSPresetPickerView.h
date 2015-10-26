#import "NSView.h"

@interface MSPresetPickerView : NSView
{
    long long sourceDragIndex;
    id <MSPresetPickerViewDelegate> _delegate;
    double _tileMargin;
    double _edgeMargin;
    long long _hoveringIndex;
    long long _currentIndex;
    struct CGSize _tileSize;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long hoveringIndex; // @synthesize hoveringIndex=_hoveringIndex;
@property(nonatomic) double edgeMargin; // @synthesize edgeMargin=_edgeMargin;
@property(nonatomic) double tileMargin; // @synthesize tileMargin=_tileMargin;
@property(nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) __weak id <MSPresetPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct MSPresetIteratorStruct)incrementIterator:(struct MSPresetIteratorStruct)arg1;
- (long long)columnCount;
- (struct MSPresetIteratorStruct)newIterator;
- (BOOL)allowsInternalDragDrop;
- (void)moveDraggedViewToRowAtIndex:(long long)arg1;
- (long long)hoverIndexForDraggingInfo:(id)arg1;
- (BOOL)supportsDrop;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)delegateAllowsDrop:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)removePresetForButton:(id)arg1;
- (void)removePresetWithTag:(long long)arg1;
- (void)pickPresetForButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldShowMenuForButton:(id)arg1;
- (BOOL)drawFullContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)isInStackView;
- (void)stackIfPossible;
- (void)addPreset:(id)arg1;
- (id)addPresetButtonWithOffset:(struct CGPoint)arg1;
- (id)presetButtonForIndex:(unsigned long long)arg1 withOffset:(struct CGPoint)arg2;
- (BOOL)shouldShowAddButton;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

