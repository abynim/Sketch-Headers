#import "MSStylePart.h"

@interface _MSStyleReflection : MSStylePart
{
    double _distance;
    double _strength;
}

@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveStrength:(double)arg1;
- (double)primitiveStrength;
- (void)setPrimitiveDistance:(double)arg1;
- (double)primitiveDistance;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

