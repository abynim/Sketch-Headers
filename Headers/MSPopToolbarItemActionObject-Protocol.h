#import "NSObject.h"

@class MSPopUpToolbarItem;

@protocol MSPopToolbarItemActionObject <NSObject>
- (BOOL)toolbarItemShouldDrawWithArrow:(MSPopUpToolbarItem *)arg1;
@end

