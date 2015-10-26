#import "NSView.h"

@interface NSView (CHViewAdditions)
- (void)beginDragFromEvent:(id)arg1 image:(id)arg2 writersBlock:(CDUnknownBlockType)arg3;
- (void)beginDragFromEvent:(id)arg1 image:(id)arg2 type:(id)arg3 data:(id)arg4;
- (id)enclosingSplitView;
- (id)imageRepresentation;
- (void)setNeedsDisplay;
- (void)setFrameOriginY:(double)arg1;
- (void)setFrameOriginX:(double)arg1;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameHeight:(double)arg1;
@end

