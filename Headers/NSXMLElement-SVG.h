#import "NSXMLElement.h"

@interface NSXMLElement (SVG)
- (id)cssClassNamesWithBase:(id)arg1;
- (id)urlLink;
- (id)simplifyAttributesIgnoringElements:(id)arg1 attributes:(id)arg2;
- (void)removeAttributesMatchingParentIgnoringAttributes:(id)arg1;
- (id)attributesWithStyleMergedDefaults:(id)arg1;
- (id)nodeOrParentNodeWithName:(id)arg1;
- (id)colorFromAttributeWithName:(id)arg1;
- (double)doubleValueFromPercentageAttributeWithName:(id)arg1 orDefault:(double)arg2;
- (double)doubleValueFromPercentageAttributeWithName:(id)arg1 alternate:(id)arg2;
- (double)doubleValueFromPercentageAttributeWithName:(id)arg1;
- (struct CGRect)rectValue;
- (struct CGRect)rectValueFromAttributeWithName:(id)arg1;
- (long long)intValueFromAttributeWithName:(id)arg1;
- (id)stringFromAttributeWithName:(id)arg1;
- (id)numbersFromAttributeWithName:(id)arg1 scale:(double)arg2;
- (id)numbersFromAttributeWithName:(id)arg1;
- (double)doubleValueFromAttributeWithName:(id)arg1 scale:(double)arg2;
- (double)doubleValueFromAttributeWithName:(id)arg1 alternate:(id)arg2;
- (double)doubleValueFromAttributeWithName:(id)arg1;
- (id)numberFromAttributeWithName:(id)arg1 scale:(double)arg2;
- (id)numberFromAttributeWithName:(id)arg1;
- (BOOL)gotAttributeWithName:(id)arg1;
@end

