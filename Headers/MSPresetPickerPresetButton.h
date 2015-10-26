#import "MSPresetPickerButton.h"

#import "NSDraggingSource.h"

@class NSString;

@interface MSPresetPickerPresetButton : MSPresetPickerButton <NSDraggingSource>
{
}

- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)innerShadow;
- (struct CGRect)frameConsideringAnimation;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

