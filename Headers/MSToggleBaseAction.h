#import "MSBaseAction.h"

@interface MSToggleBaseAction : MSBaseAction
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (id)root;
- (void)setGrid:(id)arg1;
- (id)grid;
- (id)prepareNewGrid;
- (void)doPerformAction:(id)arg1;

@end

