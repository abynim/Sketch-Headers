#import "NSPopUpButton.h"

@class BCFlexibleColor, NSArray, NSNumberFormatter;

@interface BCColorPreview : NSPopUpButton
{
    BOOL _isHovering;
    BCFlexibleColor *_color;
    NSArray *_frequentColors;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
@property(copy, nonatomic) NSArray *frequentColors; // @synthesize frequentColors=_frequentColors;
@property(retain, nonatomic) BCFlexibleColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawCheckerboard;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)imageForColorTracker:(id)arg1;
- (id)toolTipForColorTracker:(id)arg1;
- (id)initInBounds:(struct CGRect)arg1;

@end

