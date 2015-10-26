#import "MSBaseAction.h"

@interface MSBaseMoveAction : MSBaseAction
{
}

- (BOOL)dynamicTitle;
- (BOOL)optionKeyPressed;
- (id)tooltip;
- (id)validation;
- (BOOL)validate;

@end

