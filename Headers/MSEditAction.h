#import "MSBaseAction.h"

@interface MSEditAction : MSBaseAction
{
}

- (id)tooltip;
- (BOOL)isSelectable;
- (void)doPerformAction:(id)arg1;
- (void)edit:(id)arg1;
- (id)validation;

@end

