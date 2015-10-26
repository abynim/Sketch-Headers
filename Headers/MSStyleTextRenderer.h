#import "MSStyleRenderer.h"

@interface MSStyleTextRenderer : MSStyleRenderer
{
}

+ (void)drawTextLayoutManager:(id)arg1 style:(id)arg2 atPoint:(struct CGPoint)arg3 inFrame:(struct CGRect)arg4 context:(id)arg5;
- (void)drawBorderForLayoutManager:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGPoint)originForDrawingLayoutManager:(id)arg1;
- (struct CGRect)boundingRectForDrawingTextInOriginalRect;
- (void)drawLayoutManager:(id)arg1 style:(id)arg2 aPoint:(struct CGPoint)arg3;
- (void)renderWithLayoutManager:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

