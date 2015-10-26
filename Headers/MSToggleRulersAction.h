#import "MSBaseAction.h"

@interface MSToggleRulersAction : MSBaseAction
{
}

- (id)label;
- (BOOL)validateMenuItem:(id)arg1;
- (id)imageName;
- (void)doPerformAction:(id)arg1;
- (void)toggleRulers:(id)arg1;

@end

