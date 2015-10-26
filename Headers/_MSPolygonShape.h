#import "MSCustomShapeLayer.h"

@interface _MSPolygonShape : MSCustomShapeLayer
{
    long long _numberOfPoints;
}

@property(nonatomic) long long numberOfPoints; // @synthesize numberOfPoints=_numberOfPoints;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveNumberOfPoints:(long long)arg1;
- (long long)primitiveNumberOfPoints;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

