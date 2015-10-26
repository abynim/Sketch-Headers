#import "NSMenuItem.h"

@interface NSMenuItem (CHMenuItemAdditions)
+ (id)itemWithTitle:(id)arg1 action:(SEL)arg2;
+ (id)smallItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)isInMainMenu;
@end

