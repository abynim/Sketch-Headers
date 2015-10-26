#import "MSModelObject.h"

@class MSColor;

@interface _MSGradientStop : MSModelObject
{
    MSColor *_color;
    double _position;
}

@property(nonatomic) double position; // @synthesize position=_position;
@property(copy, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePosition:(double)arg1;
- (double)primitivePosition;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

