#import "MSBaseAction.h"

@interface MSSplitAction : MSBaseAction
{
}

- (id)imageName;
- (BOOL)validate;
- (void)doPerformAction:(id)arg1;
- (void)split:(id)arg1;

@end

