#import "MSBaseAction.h"

@interface MSEditAction : MSBaseAction
{
}

- (id)tooltip;
- (BOOL)isSelectable;
- (void)doPerformAction:(id)arg1;
- (void)edit:(id)arg1;
- (unsigned long long)editableLayerTraits;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)imageName;
- (BOOL)validate;

@end

