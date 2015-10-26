#import "NSBezierPath.h"

@interface NSBezierPath (Clockwise)
- (id)subPathsOrderedBySizeAfterOutlining;
- (int)direction;
- (id)bezierPathByMakingAntiClockwiseIfNecessary;
- (id)bezierPathByMakingClockwiseIfNecessary;
@end

