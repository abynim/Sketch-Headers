#import "NSOutlineView.h"

@interface NSOutlineView (ECCore)
- (void)collapseAllItems;
- (void)expandAllItems;
- (void)restoreSimpleExpandedState;
- (void)saveSimpleExpandedState;
- (id)ms_titleForRow:(unsigned long long)arg1;
- (unsigned long long)ms_rowForTitle:(id)arg1;
- (void)setSimpleExpandedState:(id)arg1;
- (id)simpleExpandedState;
@end

