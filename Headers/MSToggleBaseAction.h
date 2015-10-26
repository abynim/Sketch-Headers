#import "MSBaseAction.h"

@interface MSToggleBaseAction : MSBaseAction
{
}

- (BOOL)validate;
- (BOOL)dynamicTitle;
- (id)root;
- (id)label;
- (id)gridName;
- (void)setGrid:(id)arg1;
- (id)grid;
- (id)prepareNewGrid;
- (void)doPerformAction:(id)arg1;

@end

