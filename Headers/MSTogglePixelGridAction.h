#import "MSBaseAction.h"

@interface MSTogglePixelGridAction : MSBaseAction
{
}

- (id)label;
- (BOOL)dynamicTitle;
- (BOOL)validateMenuItem:(id)arg1;
- (id)imageName;
- (BOOL)isShowingPixelatedView;
- (void)doPerformAction:(id)arg1;
- (void)togglePixelGrid:(id)arg1;

@end

