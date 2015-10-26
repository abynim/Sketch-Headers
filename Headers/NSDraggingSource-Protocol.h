#import "NSObject.h"

@class NSDraggingSession;

@protocol NSDraggingSource <NSObject>
- (unsigned long long)draggingSession:(NSDraggingSession *)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;

@optional
- (BOOL)ignoreModifierKeysForDraggingSession:(NSDraggingSession *)arg1;
- (void)draggingSession:(NSDraggingSession *)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(NSDraggingSession *)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(NSDraggingSession *)arg1 willBeginAtPoint:(struct CGPoint)arg2;
@end

