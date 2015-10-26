#import "NSMutableArray.h"

@interface NSMutableArray (SVGNodeAdditions)
+ (id)illegalIdentifierChars;
- (void)addAttributeWithName:(id)arg1 percentageFractionalValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 percentageValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 numberValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 pixelValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)addAttributeForID:(id)arg1;
- (unsigned long long)indexOfAttributeWithName:(id)arg1;
@end

