#import "NSTextField.h"

@class NSArray, NSTextField<MSUpDownProtocol>;

@interface MSTextLabelForUpDownField : NSTextField
{
    BOOL didMouseDown;
    BOOL shouldOpenUndoGroupOnNextDrag;
    BOOL hasOpenedUndoGroupOnDrag;
    double valueAtMouseDown;
    struct CGPoint mouseDownLocation;
    NSTextField<MSUpDownProtocol> *_upDownTextField;
    NSArray *_textFields;
}

@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *upDownTextField; // @synthesize upDownTextField=_upDownTextField;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)canScrub;
- (void)mouseDown:(id)arg1;
- (id)textField;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (id)advancedUndoManager;

@end

