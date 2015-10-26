#import "NSMutableData.h"

@interface NSMutableData (ZKAdditions)
+ (id)zk_dataWithLittleInt64:(unsigned long long)arg1;
+ (id)zk_dataWithLittleInt32:(unsigned int)arg1;
+ (id)zk_dataWithLittleInt16:(unsigned short)arg1;
- (void)zk_appendPrecomposedUTF8String:(id)arg1;
- (void)zk_appendLittleBool:(BOOL)arg1;
- (void)zk_appendLittleInt64:(unsigned long long)arg1;
- (void)zk_appendLittleInt32:(unsigned int)arg1;
- (void)zk_appendLittleInt16:(unsigned short)arg1;
@end

