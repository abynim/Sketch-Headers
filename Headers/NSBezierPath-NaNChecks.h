#import "NSBezierPath.h"

@interface NSBezierPath (NaNChecks)
+ (void)nanSafeSwizzleSelector:(SEL)arg1 overrideSelector:(SEL)arg2;
+ (void)load;
- (void)bc_nan_curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)bc_nan_lineToPoint:(struct CGPoint)arg1;
- (void)bc_nan_moveToPoint:(struct CGPoint)arg1;
@end

