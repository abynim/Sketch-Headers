#import "MSCustomShapeLayer.h"

@interface _MSRectangleShape : MSCustomShapeLayer
{
    BOOL _hasConvertedToNewRoundCorners;
    double _fixedRadius;
}

@property(nonatomic) BOOL hasConvertedToNewRoundCorners; // @synthesize hasConvertedToNewRoundCorners=_hasConvertedToNewRoundCorners;
@property(nonatomic) double fixedRadius; // @synthesize fixedRadius=_fixedRadius;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveHasConvertedToNewRoundCorners:(BOOL)arg1;
- (BOOL)primitiveHasConvertedToNewRoundCorners;
- (void)setPrimitiveFixedRadius:(double)arg1;
- (double)primitiveFixedRadius;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

