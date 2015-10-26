#import "NSBezierPath.h"

@interface NSBezierPath (NSBezierPath_Various)
+ (id)bezierPathWithSubPaths:(id)arg1;
+ (id)bezierCurveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
+ (id)bezierPathFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)strokeWithWidth:(double)arg1;
- (void)fillNonZero;
- (void)fillEvenOdd;
- (id)bezierPathWithSquareLineCapStyle;
- (id)bezierPathWithLineWidth:(double)arg1;
- (id)outerPathWithRect:(struct CGRect)arg1;
- (id)insetPathBy:(double)arg1;
- (id)outlinePathWithWidth:(double)arg1;
- (BOOL)containsRect:(struct CGRect)arg1;
- (void)debugWriteToFileNamed:(id)arg1;
- (void)setDashPattern:(id)arg1;
- (id)simplifyWithMargin:(long long)arg1;
- (id)simplify;
- (id)subPaths;
- (id)scaleBy:(double)arg1;
@end

