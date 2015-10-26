#import "NSButton.h"

@interface MSHoverButton : NSButton
{
    BOOL _mouseIsHovering;
}

@property(nonatomic) BOOL mouseIsHovering; // @synthesize mouseIsHovering=_mouseIsHovering;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

