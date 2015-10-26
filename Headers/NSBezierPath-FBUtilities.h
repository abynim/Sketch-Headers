#import "NSBezierPath.h"

@interface NSBezierPath (FBUtilities)
- (void)fb_appendElement:(struct NSBezierElement)arg1;
- (void)fb_appendPath:(id)arg1;
- (void)fb_copyAttributesFrom:(id)arg1;
- (id)fb_subpathWithRange:(struct _NSRange)arg1;
- (struct NSBezierElement)fb_elementAtIndex:(unsigned long long)arg1;
- (struct CGPoint)fb_pointAtIndex:(unsigned long long)arg1;
@end

