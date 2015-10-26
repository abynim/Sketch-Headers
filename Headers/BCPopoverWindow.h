#import "NSWindow.h"

@interface BCPopoverWindow : NSWindow
{
}

+ (id)attachedWindowWithView:(id)arg1;
- (id)arrowView;
@property(nonatomic) double arrowPosition; // @dynamic arrowPosition;
@property(nonatomic) unsigned long long arrowEdge; // @dynamic arrowEdge;
- (unsigned long long)collectionBehavior;
- (BOOL)canBecomeKeyWindow;
- (void)resignMainWindow;
- (id)initWithContentRect:(struct CGRect)arg1;

@end

