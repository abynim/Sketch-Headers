#import "_MSSimpleGrid.h"

@class NSColor;

@interface MSSimpleGrid : _MSSimpleGrid
{
    NSColor *lightColor;
    NSColor *darkColor;
    double zoom;
}

- (void).cxx_destruct;
- (id)verticalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (id)horizontalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawVerticalLine:(id)arg1 atX:(double)arg2;
- (void)drawHorizontalLine:(id)arg1 atY:(double)arg2;
- (void)drawVerticalLinesInRect:(struct CGRect)arg1 baseX:(double)arg2;
- (void)drawHorizontalLinesInRect:(struct CGRect)arg1 baseY:(double)arg2;
- (void)drawInRect:(struct CGRect)arg1 baseLine:(struct CGPoint)arg2 atZoom:(double)arg3;
- (void)from:(double)arg1 doWhile:(CDUnknownBlockType)arg2 incrementBy:(double)arg3 run:(CDUnknownBlockType)arg4;

@end

