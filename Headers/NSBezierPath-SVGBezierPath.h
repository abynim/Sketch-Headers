#import "NSBezierPath.h"

@interface NSBezierPath (SVGBezierPath)
+ (id)bezierPathFromSVGString:(id)arg1;
- (id)svgAttributes;
- (void)addSVGArcWithAngle:(double)arg1 radius:(struct CGSize)arg2 from:(struct CGPoint)arg3 to:(struct CGPoint)arg4 largeArc:(BOOL)arg5 sweep:(BOOL)arg6;
@end

