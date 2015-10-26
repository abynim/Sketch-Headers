#import "NSString.h"

@interface NSString (ECCore)
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5 window:(long long)arg6;
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (id)linesFrom:(long long)arg1 to:(long long)arg2 lines:(id)arg3;
- (BOOL)matchesString:(id)arg1 divergingAtLine:(unsigned long long *)arg2 after:(id *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (BOOL)matchesString:(id)arg1 divergingAfter:(id *)arg2 atIndex:(unsigned long long *)arg3 divergentChar:(unsigned short *)arg4 expectedChar:(unsigned short *)arg5;
- (id)firstLines:(unsigned long long)arg1;
- (id)lastLines:(unsigned long long)arg1;
- (id)stringBySplittingMixedCaps;
- (id)componentsSeparatedByMixedCaps;
@end

