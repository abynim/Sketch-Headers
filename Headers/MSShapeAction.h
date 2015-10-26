#import "MSBaseAction.h"

@interface MSShapeAction : MSBaseAction
{
}

- (BOOL)hasSubMenu;
- (id)tooltip;
- (id)children;
- (void)menuNeedsUpdate:(id)arg1;

@end

