#import "NSBezierPath.h"

@interface NSBezierPath (NSBezierPath_Bending)
- (id)bendToBezierPath:(id)arg1 atOffset:(double)arg2;
- (void)addCurveSement:(id)arg1 toBezierPath:(id)arg2 bendingOverPath:(id)arg3 atOffset:(double)arg4;
- (void)addShortCurveSegment:(id)arg1 toBezierPath:(id)arg2 bendingOverPath:(id)arg3 atOffset:(double)arg4;
- (void)addLineSement:(id)arg1 toBezierPath:(id)arg2 bendingOverPath:(id)arg3 atOffset:(double)arg4;
- (void)addShortLineSement:(id)arg1 toBezierPath:(id)arg2 bendingOverPath:(id)arg3 atOffset:(double)arg4;
- (struct CGPoint)putPoint:(struct CGPoint)arg1 onBezierPath:(id)arg2 offset:(long long)arg3;
@end

