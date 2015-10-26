#import "NSButton.h"

@class MSStyleBasicFill, NSColor;

@interface MSColorPreviewButton : NSButton
{
    MSStyleBasicFill *_basicFill;
    NSColor *_color;
    id _dragOwner;
}

@property(nonatomic) __weak id dragOwner; // @synthesize dragOwner=_dragOwner;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) MSStyleBasicFill *basicFill; // @synthesize basicFill=_basicFill;
- (void).cxx_destruct;
- (void)drawNoiseFillInRect:(struct CGRect)arg1;
- (void)drawPatternFillInRect:(struct CGRect)arg1;
- (void)drawGradientFillInRect:(struct CGRect)arg1;
- (void)drawColorFillInRect:(struct CGRect)arg1;
- (void)drawBasicFillInRect:(struct CGRect)arg1;
- (id)fillColor;
- (id)innerBorderColor;
- (id)borderColor;
- (BOOL)isFlipped;
- (void)drawButton;
- (struct CGRect)colorFrame;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;

@end

