#import "NSView.h"

@interface MSAlternatingView : NSView
{
    NSView *otherView;
    BOOL didDrag;
    BOOL isInside;
    BOOL isDown;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)buttonImage;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (void)mouseUp:(id)arg1;
- (BOOL)shouldSwapColorModeForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

