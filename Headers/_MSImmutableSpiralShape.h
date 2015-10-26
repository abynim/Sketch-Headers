#import "MSImmutableCustomShapeLayer.h"

@interface _MSImmutableSpiralShape : MSImmutableCustomShapeLayer
{
    double _compactness;
    double _size;
    double _start;
}

@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double compactness; // @synthesize compactness=_compactness;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

