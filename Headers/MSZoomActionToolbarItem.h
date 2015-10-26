#import "NSToolbarItem.h"

@class MSZoomAction;

@interface MSZoomActionToolbarItem : NSToolbarItem
{
    MSZoomAction *_zoomAction;
}

@property(nonatomic) __weak MSZoomAction *zoomAction; // @synthesize zoomAction=_zoomAction;
- (void).cxx_destruct;
- (void)validate;

@end

