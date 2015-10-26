#import "MSBaseInsertAction.h"

@interface MSInsertLineAction : MSBaseInsertAction
{
}

- (unsigned short)shortcutCharacter;
- (id)imageName;
- (id)tooltip;
- (BOOL)isSelectable;
- (void)doPerformAction:(id)arg1;
- (id)lineShapeFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)insertLine:(id)arg1;

@end

