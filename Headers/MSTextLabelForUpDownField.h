#import "NSTextField.h"

@class NSArray, NSTextField<MSUpDownProtocol>;

@interface MSTextLabelForUpDownField : NSTextField
{
    NSTextField<MSUpDownProtocol> *_upDownTextField;
    NSArray *_textFields;
}

@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *upDownTextField; // @synthesize upDownTextField=_upDownTextField;
- (void).cxx_destruct;
- (BOOL)canScrub;
- (BOOL)trackMouseDraggedInBlock:(CDUnknownBlockType)arg1;
- (void)mouseDown:(id)arg1;
- (id)textField;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (id)advancedUndoManager;
- (BOOL)clickShouldDismissPopover:(id)arg1;

@end

