#import "MSBaseAction.h"

@interface MSJoinAction : MSBaseAction
{
}

- (BOOL)validate;
- (id)joinBezierPath:(id)arg1 withBezierPath:(id)arg2;
- (void)doPerformAction:(id)arg1;
- (void)join:(id)arg1;

@end

