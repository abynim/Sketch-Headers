#import "NSWindow.h"

@class NSEvent;

@interface MSDocumentWindow : NSWindow
{
    NSEvent *_lastForwardedKeyEvent;
}

@property(nonatomic) __weak NSEvent *lastForwardedKeyEvent; // @synthesize lastForwardedKeyEvent=_lastForwardedKeyEvent;
- (void).cxx_destruct;
- (BOOL)closePopovers;
- (BOOL)shouldDismissPopover:(id)arg1 event:(id)arg2;
- (void)keyDown:(id)arg1;
- (void)sendEvent:(id)arg1;

@end

