#import "MSBaseInsertAction.h"

@interface MSBaseShapeAction : MSBaseInsertAction
{
}

+ (id)insertShapeLayer:(id)arg1 identifier:(id)arg2 document:(id)arg3;
- (id)label;
- (id)exitToNormalEventHandler;
- (id)insertShape;
- (id)prototypeLayer;
- (id)shapeForInsertion;
- (void)doPerformAction:(id)arg1;
- (id)tooltip;
- (BOOL)isSelectable;
- (id)recipeName;

@end

