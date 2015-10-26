#import "NSColor.h"

@interface NSColor (CHColorExtensions)
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)colorWithGray:(float)arg1;
- (BOOL)isWhite;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (struct CGColor *)newCGColor;
@end

