#import "MSSnapItem.h"

@interface MSTextSnapItem : MSSnapItem
{
}

+ (double)baselineForTextLayer:(id)arg1;
+ (id)snapLinesForLayer:(id)arg1;
- (double)xHeight;
- (double)baseline;
- (BOOL)supportsResizingForSnapping;
- (id)snapEnumerations;

@end

