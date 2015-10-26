#import "MSMathNumberFormatter.h"

@interface MSAutoCappingNumberFormatter : MSMathNumberFormatter
{
}

- (id)uncappedFormatter;
- (id)cappedValueForString:(id)arg1 errorDescription:(out id *)arg2;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@end

