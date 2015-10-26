#import "NSTextStorage.h"

@interface NSTextStorage (MSCalculateBounds)
- (struct CGRect)computeFlexibleLayout;
- (struct CGRect)calculateFlexibleBounds:(struct CGRect)arg1;
- (struct CGRect)computeFixedLayout;
- (struct CGRect)calculateFixedBounds:(struct CGRect)arg1;
- (struct CGRect)boundsForTextBehaviour:(long long)arg1 original:(struct CGRect)arg2;
@end

