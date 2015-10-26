#import "NSValueTransformer.h"

@interface BCStringWithoutNewlineTransformer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;
- (BOOL)allowsReverseTransformation;

@end

