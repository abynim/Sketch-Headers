#import "BCColorPickerBaseView.h"

@interface BCColorPresetPicker : BCColorPickerBaseView
{
}

- (BOOL)isFlipped;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (unsigned long long)colorIndexAtPoint:(struct CGPoint)arg1;
- (unsigned long long)colorIndexForEvent:(id)arg1;
- (id)clickedColorForEvent:(id)arg1;
- (id)imageForColor:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

