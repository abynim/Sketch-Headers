#import "_MSStarShape.h"

#import "NSCoding.h"

@interface MSStarShape : _MSStarShape <NSCoding>
{
}

- (void)resetPoints;
- (id)defaultName;
- (struct CGRect)boundsForCursorPreview;
- (id)inspectorViewControllers;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

@end

