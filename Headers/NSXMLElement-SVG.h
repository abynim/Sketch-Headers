//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXMLElement.h"

@interface NSXMLElement (SVG)
- (void)addAttributeWithName:(id)arg1 percentageFractionalValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 percentageValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 numberValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 pixelValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (id)cssClassNamesWithBase:(id)arg1;
- (id)urlLink;
- (id)localLink;
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

