#import "MSImmutableShapePathLayer.h"

@interface _MSImmutableTriangleShape : MSImmutableShapePathLayer
{
    BOOL _isEquilateral;
}

@property(nonatomic) BOOL isEquilateral; // @synthesize isEquilateral=_isEquilateral;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

