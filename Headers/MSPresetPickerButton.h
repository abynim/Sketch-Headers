#import "NSButton.h"

@interface MSPresetPickerButton : NSButton
{
    struct CGPoint destinationAnimationPoint;
}

- (void)animateToOrigin:(struct CGPoint)arg1;

@end

