#import "MSBaseAction.h"

@interface MSPrintAction : MSBaseAction
{
}

- (void)doPerformAction:(id)arg1;
- (void)makeArtboardBeforePrinting:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)dynamicTitle;
- (id)menuItemsForPage:(id)arg1;
- (void)addMenuItems:(id)arg1 toMenu:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;

@end

