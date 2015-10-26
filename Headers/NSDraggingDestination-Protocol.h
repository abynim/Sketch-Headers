#import "NSObject.h"

@protocol NSDraggingDestination <NSObject>

@optional
- (void)updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id <NSDraggingInfo>)arg1;
- (void)concludeDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)arg1;
- (void)draggingExited:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingUpdated:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingEntered:(id <NSDraggingInfo>)arg1;
@end

