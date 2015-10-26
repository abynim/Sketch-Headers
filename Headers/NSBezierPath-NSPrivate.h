#import "NSBezierPath.h"

@interface NSBezierPath (NSPrivate)
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPathWithPathFromContext:(struct CGContext *)arg1;
- (id)strokedPathHelperContext;
- (void)setCGPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
@end

