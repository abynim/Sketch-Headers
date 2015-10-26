#import "MSBaseGrid.h"

@interface _MSSimpleGrid : MSBaseGrid
{
    long long _gridSize;
    long long _thickGridTimes;
}

@property(nonatomic) long long thickGridTimes; // @synthesize thickGridTimes=_thickGridTimes;
@property(nonatomic) long long gridSize; // @synthesize gridSize=_gridSize;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveThickGridTimes:(long long)arg1;
- (long long)primitiveThickGridTimes;
- (void)setPrimitiveGridSize:(long long)arg1;
- (long long)primitiveGridSize;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

