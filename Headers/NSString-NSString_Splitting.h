#import "NSString.h"

@interface NSString (NSString_Splitting)
- (BOOL)containsWordsInString:(id)arg1;
- (id)stringbyDeletingLastWord;
- (id)stringByAppendingWord:(id)arg1;
- (id)stringByPrependingWord:(id)arg1;
- (id)lastWord;
- (id)words;
- (id)simpleWords;
@end

