#import "MSImmutableStylePart.h"

@interface _MSImmutableStyleReflection : MSImmutableStylePart
{
    double _distance;
    double _strength;
}

@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

