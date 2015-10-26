#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, NSTextField<MSUpDownProtocol>;

@interface MSFillInspectorViewController : MSStylePartInspectorViewController
{
    MSColorPreviewButton *_colorButton;
    NSTextField<MSUpDownProtocol> *_opacityField;
}

@property(retain, nonatomic) NSTextField<MSUpDownProtocol> *opacityField; // @synthesize opacityField=_opacityField;
@property(retain, nonatomic) MSColorPreviewButton *colorButton; // @synthesize colorButton=_colorButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)opacityFieldAction:(id)arg1;
- (void)prepare;

@end

