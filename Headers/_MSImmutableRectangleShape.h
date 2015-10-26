#import "MSImmutableCustomShapeLayer.h"

@interface _MSImmutableRectangleShape : MSImmutableCustomShapeLayer
{
    double _fixedRadius;
    BOOL _hasConvertedToNewRoundCorners;
}

@property(nonatomic) BOOL hasConvertedToNewRoundCorners; // @synthesize hasConvertedToNewRoundCorners=_hasConvertedToNewRoundCorners;
@property(nonatomic) double fixedRadius; // @synthesize fixedRadius=_fixedRadius;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

