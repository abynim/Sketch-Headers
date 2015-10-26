#import "NSDate.h"

@interface NSDate (ZKAdditions)
+ (id)zk_dateWithDosDate:(unsigned long long)arg1;
- (unsigned int)zk_dosDate;
@end

