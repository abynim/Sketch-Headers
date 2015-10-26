#import "MSBaseAction.h"

@interface MSExportAction : MSBaseAction
{
}

- (id)slices;
- (id)baseNameForSlice;
- (struct CGRect)rectForExportingEntirePage;
- (void)createInitialSlice;
- (void)showInspectorPanelIfNecessary;
- (BOOL)hasArtboardsWitNoExportSizes;
- (void)doPerformAction:(id)arg1;
- (BOOL)validate;
- (void)export:(id)arg1;

@end

