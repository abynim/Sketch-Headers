#import "MSBaseAction.h"

@interface MSInsertLineAction : MSBaseAction
{
}

- (unsigned short)shortcutCharacter;
- (id)imageName;
- (id)tooltip;
- (BOOL)validate;
- (BOOL)isSelectable;
- (void)doPerformAction:(id)arg1;
- (id)lineShapeFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)insertLine:(id)arg1;

@end

