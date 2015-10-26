#import "NSWindow.h"

@interface MSWelcomeWindow : NSWindow
{
}

- (void)moveButtonOutOfView:(id)arg1;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (void)resizeContentView;
- (void)windowDidResize:(id)arg1;
- (void)insertMavericksWelcomeContentView;
- (void)awakeFromNib;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

