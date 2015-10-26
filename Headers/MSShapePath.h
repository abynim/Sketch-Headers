#import "_MSShapePath.h"

@interface MSShapePath : _MSShapePath
{
}

+ (id)pathWithBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)pathWithPoints:(id)arg1;
- (BOOL)isPolygon;
- (BOOL)isRectangle;
- (BOOL)isLine;
- (void)multiplyBy:(double)arg1;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (BOOL)attemptToSimplifyBetweenPoint:(id)arg1 andPoint:(id)arg2;
- (BOOL)simplifyPathOnce;
- (void)simplifyPath;
- (unsigned long long)numberOfPoints;
- (id)lastPoint;
- (id)firstPoint;
- (id)pointAtIndex:(long long)arg1;
- (void)removeAllPoints;
- (void)removeLastPoint;
- (void)insertPoint:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPoints:(id)arg1;
- (void)addPoint:(id)arg1;
- (void)setIsClosed:(BOOL)arg1;
- (id)layer;
- (id)initWithBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)initWithPoints:(id)arg1;

@end

