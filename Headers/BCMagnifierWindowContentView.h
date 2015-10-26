#import "NSView.h"

@class BCFlexibleColor, BCScreenGrab;

@interface BCMagnifierWindowContentView : NSView
{
    BCScreenGrab *_screenGrab;
    BCFlexibleColor *_currentColor;
}

@property(retain, nonatomic) BCFlexibleColor *currentColor; // @synthesize currentColor=_currentColor;
@property(retain, nonatomic) BCScreenGrab *screenGrab; // @synthesize screenGrab=_screenGrab;
- (void).cxx_destruct;
- (void)drawMiddlePixel;
- (void)drawPixelLines;
- (void)drawBlackBorder:(id)arg1;
- (void)drawCurrentColorValues;
- (void)drawMagnifiedImage;
- (void)drawRect:(struct CGRect)arg1;

@end

