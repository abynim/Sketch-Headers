#import "BCColorPickerBaseView.h"

@class BCFlexibleColor;

@interface BCColorPreview : BCColorPickerBaseView
{
    BCFlexibleColor *_color;
}

@property(retain, nonatomic) BCFlexibleColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)drawCheckerboard;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;

@end

