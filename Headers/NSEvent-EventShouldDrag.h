#import "NSEvent.h"

@interface NSEvent (EventShouldDrag)
- (BOOL)isDoubleClick;
- (BOOL)shouldStartDrag;
@end

