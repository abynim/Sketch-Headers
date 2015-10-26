#import "NSArray.h"

@interface NSArray (NSArray_Blocks)
+ (id)arrayWithCapacity:(unsigned long long)arg1 fill:(CDUnknownBlockType)arg2;
- (BOOL)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (double)sum:(CDUnknownBlockType)arg1;
@end

