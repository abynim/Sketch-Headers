#import "MSModelObject.h"

@interface _MSGraphicsContextSettings : MSModelObject
{
    long long _blendMode;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveOpacity:(double)arg1;
- (double)primitiveOpacity;
- (void)setPrimitiveBlendMode:(long long)arg1;
- (long long)primitiveBlendMode;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

