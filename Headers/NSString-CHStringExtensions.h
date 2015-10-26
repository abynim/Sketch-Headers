#import "NSString.h"

@interface NSString (CHStringExtensions)
+ (id)stringWithNumber:(double)arg1 suffix:(id)arg2;
+ (id)stringWithFloat:(double)arg1;
+ (id)stringWithInteger:(long long)arg1;
+ (id)stringWithFirstCommonCharactersInArray:(id)arg1;
+ (id)stringWithPathComponents:(id)arg1;
- (BOOL)containsSubstring:(id)arg1;
- (id)trimmedString;
- (id)stringWithFirstCharacterLowercase;
- (BOOL)endsWith:(id)arg1;
- (BOOL)startsWith:(id)arg1;
- (id)stringByAppendingPathComponents:(id)arg1;
- (id)stringByDeletingSuffix:(id)arg1;
- (id)stringByDeletingPrefix:(id)arg1;
- (id)stringByPrefixingIfNessary:(id)arg1;
@end

