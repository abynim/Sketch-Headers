#import "NSMenu.h"

@interface NSMenu (CHMenuAdditions)
- (void)addItemsFromArray:(id)arg1;
- (void)insertItemsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isInMainMenu;
- (id)addSmallItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 submenu:(id)arg4;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 representedObject:(id)arg4;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)addItemWithTruncatedTitle:(id)arg1 small:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)addItemWithTitle:(id)arg1 small:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2;
@end

