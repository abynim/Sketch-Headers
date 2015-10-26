#import "MSBaseAction.h"

@interface MSEventHandlerAction : MSBaseAction
{
}

- (BOOL)isSelectable;
- (id)eventHandlerKey;
- (BOOL)validate;
- (BOOL)isActive;
- (void)doPerformAction:(id)arg1;

@end

