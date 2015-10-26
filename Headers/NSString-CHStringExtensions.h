#import "NSString.h"

@interface NSString (CHStringExtensions)
- (id)nameWithPrefix:(id)arg1 number:(long long)arg2;
- (id)uniqueStringComparedToStrings:(id)arg1;
- (id)splitByBaseAndNumber;
- (BOOL)containsSubstring:(id)arg1;
- (id)trimmedString;
- (id)stringWithFirstCharacterLowercase;
- (BOOL)endsWith:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)endsWith:(id)arg1;
- (BOOL)startsWith:(id)arg1;
- (id)stringByAppendingPathComponents:(id)arg1;
- (id)stringByDeletingSuffix:(id)arg1;
- (id)stringByDeletingPrefix:(id)arg1;
@end

