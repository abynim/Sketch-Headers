#import "NSWindow.h"

@interface MSDocumentWindow : NSWindow
{
}

- (BOOL)closePopovers;
- (BOOL)shouldDismissPopover:(id)arg1 event:(id)arg2;
- (void)sendEvent:(id)arg1;

@end

