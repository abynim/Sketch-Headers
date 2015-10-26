#import "MSBaseAction.h"

@interface MSReplaceImageAction : MSBaseAction
{
}

- (id)openPanel;
- (void)applyImage:(id)arg1 withName:(id)arg2 tolayer:(id)arg3;
- (void)replaceImage:(id)arg1;
- (BOOL)validate;

@end

