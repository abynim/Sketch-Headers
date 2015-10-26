#import "NSWindow.h"

@interface BCMagnifierWindow : NSWindow
{
    struct CGRect _screenFrame;
}

@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
- (void)flagsChanged;
- (void)setCurrentColor:(id)arg1;
- (void)setScreenGrab:(id)arg1;
- (void)mouseMovedTo:(struct CGPoint)arg1;
- (id)initWithScreenGrab:(id)arg1;
- (struct CGRect)frameForWindowAroundMouse;

@end

