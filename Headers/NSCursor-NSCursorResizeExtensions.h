#import "NSCursor.h"

@interface NSCursor (NSCursorResizeExtensions)
+ (id)rotateBottomCursor;
+ (id)rotateTopCursor;
+ (id)rotateRightCursor;
+ (id)rotateLeftCursor;
+ (id)rotateTopRightCursor;
+ (id)rotateTopLeftCursor;
+ (id)rotateBottomLeftCursor;
+ (id)rotateBottomRightCursor;
+ (id)resizeBottomLeftToTopRightCursor;
+ (id)resizeTopLeftToBottomRightCursor;
+ (id)resizeVerCursor;
+ (id)resizeHorCursor;
+ (id)penCloseCursor;
+ (id)penAddCursor;
+ (id)penCursor;
+ (id)cursorWithName:(id)arg1 hotSpot:(struct CGPoint)arg2;
@end

