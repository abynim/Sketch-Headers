#import "NSResponder.h"

@class MSIntegratedStepper, NSTextField<MSUpDownProtocol>;

@interface MSUpDownController : NSResponder
{
    BOOL hasOpenedUndoGroup;
    BOOL didChangeTextDuringEditing;
    NSTextField<MSUpDownProtocol> *_textField;
    MSIntegratedStepper *_stepper;
}

+ (void)initialize;
@property(retain, nonatomic) MSIntegratedStepper *stepper; // @synthesize stepper=_stepper;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (BOOL)hasValidFirstResponder;
- (double)floatValue;
- (id)advancedUndoManager;
- (double)incrementValueAccountingForModifierFlags;
- (double)adjustValueForMinimum:(double)arg1;
- (void)decrement;
- (double)adjustValueForMaximum:(double)arg1;
- (void)increment;
- (double)incrementValue;
- (void)keyUp;
- (void)setFloatValueAndNotifyBindings:(double)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)cancelTextEditingForInvalidReplacementString:(id)arg1;
- (BOOL)doCommandBySelector:(SEL)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)eventIsInsideView:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)hideStepper;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)makeStepper;
- (id)initWithTextField:(id)arg1 createStepper:(BOOL)arg2;

@end

