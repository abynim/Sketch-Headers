#import "MSBaseAction.h"

@interface MSReplaceImageAction : MSBaseAction
{
}

- (id)openPanel;
- (void)applyImage:(id)arg1 tolayer:(id)arg2;
- (void)replaceImage:(id)arg1;
- (BOOL)validate;

@end

