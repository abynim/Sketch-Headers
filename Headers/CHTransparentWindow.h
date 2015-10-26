#import "NSWindow.h"

@interface CHTransparentWindow : NSWindow
{
}

- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithContentRect:(struct CGRect)arg1;

@end

