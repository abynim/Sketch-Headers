#import "MSBaseAction.h"

@interface MSSmartRotateAction : MSBaseAction
{
}

- (id)label;
- (BOOL)isSelectable;
- (BOOL)validate;
- (void)doPerformAction:(id)arg1;
- (void)smartRotate:(id)arg1;

@end

