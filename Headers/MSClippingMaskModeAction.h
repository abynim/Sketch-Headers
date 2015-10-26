#import "MSBaseAction.h"

@interface MSClippingMaskModeAction : MSBaseAction
{
}

- (id)shapesWithClippingMask;
- (void)doPerformAction:(id)arg1;
- (void)clippingMaskMode:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validate;

@end

