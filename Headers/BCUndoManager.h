#import "NSUndoManager.h"

@interface BCUndoManager : NSUndoManager
{
    int _undoNameRegistrationDisabledCounter;
    int _undCoalescingDisabledCounter;
    BOOL shouldOpenUndoGroup;
    BOOL hasOpenedUndoGroup;
}

- (void)enableUndoCoalescing;
- (void)disableUndoCoalescing;
- (BOOL)shouldCoalesceOldAction:(id)arg1 withNewAction:(id)arg2;
- (void)redo;
- (void)undo;
- (id)redoActionName;
- (id)undoActionName;
- (void)setActionName:(id)arg1 sender:(id)arg2;
- (void)setAdvancedActionName:(id)arg1;
- (void)endUndoGrouping;
- (void)prepareForUndo;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)disableUndoNameRegistration;
- (void)enableUndoNameRegistration;
- (void)bc_openUndoGroupIfNecessary;
- (void)endMasterUndoGrouping;
- (void)beginMasterUndoGrouping;

@end

