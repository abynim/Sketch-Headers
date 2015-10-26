#import "MSModelBase.h"

@class MSColor;

@interface _MSGradientStop : MSModelBase
{
    double _position;
    MSColor *_color;
}

@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)setPrimitivePosition:(double)arg1;
- (double)primitivePosition;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

