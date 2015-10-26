#import "NSArray.h"

@interface NSArray (Chocolat)
+ (id)arrayByMergingArrays:(id)arg1;
- (id)rotateTwoDimensionalArray;
- (id)uniqueObjects;
- (id)subArrayToIndex:(long long)arg1;
- (id)objectAtIndexOrNil:(unsigned long long)arg1;
- (BOOL)isValidIndex:(unsigned long long)arg1;
- (id)dictionaryBySplittingArrayUsingKey:(id)arg1;
- (id)arrayByAddingObjects:(id)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (id)sortedArrayUsingKey:(id)arg1;
- (id)sortedArray;
- (id)arrayByRemovingNull;
- (BOOL)containsOnlyObjectsOfClass:(Class)arg1;
- (id)mutableCopyDeep;
- (id)copyDeep;
- (BOOL)containsObjectOfClass:(Class)arg1;
- (id)reversedArray;
- (void)enumerateTailUsingBlock:(CDUnknownBlockType)arg1;
- (id)tail;
- (id)filteredByObjectsOfClass:(Class)arg1;
- (id)filterUsingBlockWithIndex:(CDUnknownBlockType)arg1;
- (id)filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateWithIndex:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (id)mapWithIndex:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
@end

