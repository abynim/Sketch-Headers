#import "MSModelObject.h"

#import "NSFastEnumeration.h"

@class NSArray, NSMutableArray;

@interface MSArray : MSModelObject <NSFastEnumeration>
{
    NSMutableArray *array;
    id <MSArrayDelegate> _delegate;
}

+ (id)dataArrayWithArray:(id)arg1;
+ (id)dataArray;
+ (id)array;
@property(nonatomic) __weak id <MSArrayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *array; // @synthesize array;
- (void).cxx_destruct;
- (id)description;
- (id)filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (BOOL)hasDefaultValues;
- (void)breakConnectionWithAllObjects;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)insertObject:(id)arg1 afterObject:(id)arg2;
- (void)insertObject:(id)arg1 beforeObject:(id)arg2;
- (id)detachAllObjects;
- (void)removeAllObjects;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceContentsWithArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)firstObjectSatisfyingTest:(CDUnknownBlockType)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (BOOL)isValidIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)count;
- (id)objectAtIndexOrNil:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (void)setArray:(id)arg1;
- (void)setAsParentOnChildren;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)fillInEmptyObjects;
- (void)initEmptyObject;
- (id)initWithArray:(id)arg1 lightweight:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)treeAsDictionary;

@end

