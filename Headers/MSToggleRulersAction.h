#import "MSBaseAction.h"

@interface MSToggleRulersAction : MSBaseAction
{
}

- (id)label;
- (id)imageName;
- (BOOL)dynamicTitle;
- (void)doPerformAction:(id)arg1;
- (void)toggleRulers:(id)arg1;

@end

