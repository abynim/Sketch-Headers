#import "MSBaseAction.h"

@interface MSZoomAction : MSBaseAction
{
}

- (id)zoomValueString;
- (void)zoomValueDidChange;
- (void)zoomModeToggle:(id)arg1;
- (id)zoomViewAtSize:(unsigned long long)arg1;
- (id)toolbarItemWithSize:(unsigned long long)arg1;

@end

