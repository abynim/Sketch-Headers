#import "_MSTriangleShape.h"

@interface MSTriangleShape : _MSTriangleShape
{
}

- (id)defaultName;
- (void)resetPoints;
- (void)initEmptyObject;
- (struct CGRect)boundsForCursorPreview;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

@end

