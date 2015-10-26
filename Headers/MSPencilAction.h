#import "MSBaseAction.h"

@interface MSPencilAction : MSBaseAction
{
}

- (unsigned short)shortcutCharacter;
- (id)tooltip;
- (BOOL)isSelectable;
- (BOOL)isActive;
- (void)doPerformAction:(id)arg1;
- (void)pencil:(id)arg1;

@end

