#import "MSShapePathLayer.h"

@interface _MSTriangleShape : MSShapePathLayer
{
    BOOL _isEquilateral;
}

@property(nonatomic) BOOL isEquilateral; // @synthesize isEquilateral=_isEquilateral;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveIsEquilateral:(BOOL)arg1;
- (BOOL)primitiveIsEquilateral;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

