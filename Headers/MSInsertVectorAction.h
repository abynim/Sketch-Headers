#import "MSBaseAction.h"

@interface MSInsertVectorAction : MSBaseAction
{
}

- (BOOL)isSelectable;
- (BOOL)isActive;
- (unsigned short)shortcutCharacter;
- (id)tooltip;
- (id)rootForShapeHandler;
- (void)doPerformAction:(id)arg1;
- (void)insertVector:(id)arg1;

@end

