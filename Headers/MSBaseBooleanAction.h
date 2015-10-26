#import "MSBaseAction.h"

@interface MSBaseBooleanAction : MSBaseAction
{
}

- (id)tooltip;
- (id)validation;
- (BOOL)hasShapePartsSelected;
- (BOOL)validate;

@end

