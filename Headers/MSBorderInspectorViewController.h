#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, MSUpDownTextField, NSPopUpButton;

@interface MSBorderInspectorViewController : MSStylePartInspectorViewController
{
    NSPopUpButton *positionPopUp;
    MSColorPreviewButton *colorButton;
    MSUpDownTextField *_thicknessField;
}

@property(retain, nonatomic) MSUpDownTextField *thicknessField; // @synthesize thicknessField=_thicknessField;
- (void).cxx_destruct;
- (void)dealloc;
- (id)lineShapes;
- (void)borderThicknessChanged:(id)arg1;
- (void)enableAction:(id)arg1;
- (id)layers;
- (BOOL)canDrawInnerOrOuterBorders;
- (id)positionPopUpToolTip;
- (void)setStyleParts:(id)arg1;
- (void)prepare;
- (id)init;

@end

