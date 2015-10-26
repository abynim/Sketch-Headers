#import "MSBaseAction.h"

@interface MSSplitAction : MSBaseAction
{
}

- (id)imageName;
- (BOOL)validate;
- (void)splitGroup:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (void)split:(id)arg1;

@end

