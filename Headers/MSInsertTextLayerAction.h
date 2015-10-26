#import "MSBaseAction.h"

@interface MSInsertTextLayerAction : MSBaseAction
{
}

- (BOOL)isSelectable;
- (unsigned short)shortcutCharacter;
- (id)tooltip;
- (id)label;
- (id)menuItem;
- (void)doPerformAction:(id)arg1;
- (void)insertTextLayer:(id)arg1;
- (BOOL)validate;

@end

