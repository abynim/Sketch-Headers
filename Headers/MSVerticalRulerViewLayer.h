#import "MSRulerViewLayer.h"

@interface MSVerticalRulerViewLayer : MSRulerViewLayer
{
}

- (BOOL)isFlipped;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2 drawBackground:(BOOL)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

