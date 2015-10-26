#import "NSString.h"

@interface NSString (Math)
- (id)mathSet;
- (BOOL)containsMathSymbols;
- (id)stringByCalculatingMath;
- (double)floatValueUsingMath;
- (double)floatValueByUsingNumberFormatter;
- (id)stringByCalculatingPercentagesInContextOfSize:(struct CGRect)arg1 onAxis:(unsigned long long)arg2;
- (double)floatValueInContextOfSize:(struct CGRect)arg1 onAxis:(unsigned long long)arg2;
@end

