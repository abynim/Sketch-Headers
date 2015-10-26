#import "NSDictionary.h"

@interface NSDictionary (ZKAdditions)
+ (id)zk_totalSizeAndCountDictionaryWithSize:(unsigned long long)arg1 andItemCount:(unsigned long long)arg2;
- (unsigned long long)zk_itemCount;
- (unsigned long long)zk_totalFileSize;
@end

