#import "MSUpDownTextField.h"

#import "NSTextDelegate.h"

@class NSString;

@interface MSTextFieldKeyEventForwarder : MSUpDownTextField <NSTextDelegate>
{
}

- (id)keyEventFromString:(id)arg1;
- (void)sendKeyEventFromString:(id)arg1;
- (id)findCanvasView;
- (BOOL)addedTextContainsOnlyDigits:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

