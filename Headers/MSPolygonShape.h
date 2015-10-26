#import "_MSPolygonShape.h"

#import "NSCoding.h"

@interface MSPolygonShape : _MSPolygonShape <NSCoding>
{
}

- (void)resetPoints;
- (id)defaultName;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

@end

