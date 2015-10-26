#import "BCColorPickerSliderView.h"

@class BCFlexibleColor;

@interface BCAlphaColorPicker : BCColorPickerSliderView
{
    double _colorAlphaValue;
    BCFlexibleColor *_color;
}

@property(retain, nonatomic) BCFlexibleColor *color; // @synthesize color=_color;
@property(nonatomic) double colorAlphaValue; // @synthesize colorAlphaValue=_colorAlphaValue;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawAlphaGradient;
- (void)drawCheckerboard;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;

@end

