#import "NSUndoManager.h"

@interface NSUndoManager (MasterGrouping)
- (void)disableUndoNameRegistration;
- (void)enableUndoNameRegistration;
- (void)endMasterUndoGrouping;
- (void)beginMasterUndoGrouping;
@end

