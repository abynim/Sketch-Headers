#import "NSMutableArray.h"

@interface NSMutableArray (NSMutableArrayAdditions)
- (void)addObjectIfNotNil:(id)arg1;
- (void)onlyKeepObjectsFromClass:(Class)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)removeFirstObject;
@end

