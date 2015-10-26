#import "MSColorInspectorSection.h"

#import "MSGradientBarViewDelegate.h"
#import "MSGradientEventHandlerDelegate.h"

@class MSGradientBarView, MSGradientEventHandler, MSGradientFactory, NSButton, NSString;

@interface MSColorInspectorSectionGradient : MSColorInspectorSection <MSGradientEventHandlerDelegate, MSGradientBarViewDelegate>
{
    NSButton *smoothOpacityButton;
    MSGradientBarView *gradientBarView;
    NSButton *_rotateLeftButton;
    NSButton *_rotateRightButton;
    MSGradientEventHandler *_gradientHandler;
    MSGradientFactory *_factory;
}

@property(retain, nonatomic) MSGradientFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) MSGradientEventHandler *gradientHandler; // @synthesize gradientHandler=_gradientHandler;
@property(retain, nonatomic) NSButton *rotateRightButton; // @synthesize rotateRightButton=_rotateRightButton;
@property(retain, nonatomic) NSButton *rotateLeftButton; // @synthesize rotateLeftButton=_rotateLeftButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeGradientHandler;
- (void)popoverWillClose;
- (id)gradients;
- (id)rotateTransformForGradient:(id)arg1 angle:(double)arg2;
- (void)rotateGradientsByAngle:(double)arg1;
- (void)rotateRightAction:(id)arg1;
- (void)rotateLeftAction:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)drawGradient:(id)arg1 inRect:(struct CGRect)arg2;
- (void)updateOtherGradientsToReflectChanges;
- (void)gradientHandlerDidChangeGradient:(id)arg1;
- (void)gradientHandlerWillLoseFocus:(id)arg1;
- (void)gradientHandlerDidChangeCurrentPoint:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)switchToGradientHandler;
- (BOOL)pickerView:(id)arg1 acceptDrop:(id)arg2;
- (BOOL)pickerViewSupportsDrop:(id)arg1;
- (BOOL)pickerViewSupportsDrag:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)gradientBarAction:(id)arg1;
- (long long)fillType;
- (void)switchToGradientHandlerIfNecessary;
- (void)validate;
- (id)viewsWithColorPickerView:(id)arg1;
- (void)gradientBarChanged:(id)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

