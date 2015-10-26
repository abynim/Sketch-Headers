#import "MSImmutableCustomShapeLayer.h"

@interface _MSImmutableStarShape : MSImmutableCustomShapeLayer
{
    long long _numberOfPoints;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) long long numberOfPoints; // @synthesize numberOfPoints=_numberOfPoints;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

