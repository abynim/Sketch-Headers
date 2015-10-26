#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, NSTextField;

@interface MSFillInspectorViewController : MSStylePartInspectorViewController
{
    MSColorPreviewButton *colorButton;
    NSTextField *opacityFieldColor;
    NSTextField *opacityFieldGradientOrPattern;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)opacityFieldAction:(id)arg1;
- (id)correctOpacityField;
- (void)showCorrectOpacityField;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)prepare;

@end

