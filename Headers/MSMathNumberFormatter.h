#import "NSNumberFormatter.h"

@interface MSMathNumberFormatter : NSNumberFormatter
{
}

- (id)mathSet;
- (BOOL)stringContainsMathSymbols:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;

@end

