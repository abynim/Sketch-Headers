#import "MSBaseAction.h"

@interface MSTogglePixelGridAction : MSBaseAction
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (id)imageName;
- (BOOL)isShowingPixelatedView;
- (void)doPerformAction:(id)arg1;
- (id)label;
- (void)togglePixelGrid:(id)arg1;

@end

