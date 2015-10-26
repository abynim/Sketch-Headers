#import "NSBezierPath.h"

@interface NSBezierPath (NSBezierPath_BooleanBridge)
- (id)bezierPathBySubtractingPaths:(id)arg1;
- (id)booleanExclusiveOrWith:(id)arg1;
- (id)booleanSubtractWith:(id)arg1;
- (id)booleanIntersectWith:(id)arg1;
- (id)booleanUnionWith:(id)arg1;
- (void)debugWriteBooleanOp:(long long)arg1 withPath:(id)arg2;
- (id)booleanOp:(long long)arg1 withPath:(id)arg2;
@end

