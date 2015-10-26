#import "NSString.h"

@interface NSString (ZKAdditions)
- (BOOL)zk_isResourceForkPath;
- (unsigned int)zk_precomposedUTF8Length;
@end

