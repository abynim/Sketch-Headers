#import "MSImmutableBaseGrid.h"

@interface _MSImmutableSimpleGrid : MSImmutableBaseGrid
{
    long long _gridSize;
    long long _thickGridTimes;
}

@property(nonatomic) long long thickGridTimes; // @synthesize thickGridTimes=_thickGridTimes;
@property(nonatomic) long long gridSize; // @synthesize gridSize=_gridSize;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

