#import "MSImmutableModelBase.h"

#import "NSFastEnumeration.h"

@class NSArray;

@interface MSImmutableArray : MSImmutableModelBase <NSFastEnumeration>
{
    NSArray *array;
}

@property(readonly, copy, nonatomic) NSArray *array; // @synthesize array;
- (void).cxx_destruct;
- (id)description;
- (id)filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (BOOL)hasDefaultValues;
- (id)map:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)firstObjectSatisfyingTest:(CDUnknownBlockType)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (BOOL)isValidIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectAtIndexOrNil:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

