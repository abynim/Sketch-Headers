#import "NSOutlineView.h"

@class BCOutlineViewDataController;

@interface BCOutlineView : NSOutlineView
{
    BCOutlineViewDataController *_dataController;
    id _discloserTriangleClickedItem;
    SEL _disclosureButtonAction;
}

@property(nonatomic) SEL disclosureButtonAction; // @synthesize disclosureButtonAction=_disclosureButtonAction;
@property(retain, nonatomic) id discloserTriangleClickedItem; // @synthesize discloserTriangleClickedItem=_discloserTriangleClickedItem;
@property(nonatomic) __weak BCOutlineViewDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (id)menuForEvent:(id)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)disclosureTriangleClicked:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)arg1;

@end

