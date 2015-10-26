#import "_MSBaseGrid.h"

@interface MSBaseGrid : _MSBaseGrid
{
}

+ (void)initialize;
- (id)horizontalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (id)verticalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawInRect:(struct CGRect)arg1 baseLine:(struct CGPoint)arg2 atZoom:(double)arg3;
- (BOOL)shouldDraw;
- (void)setIsEnabled:(BOOL)arg1;

@end

