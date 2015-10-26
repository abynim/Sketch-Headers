#import "MSModelBase.h"

@interface _MSColor : MSModelBase
{
    double _alpha;
    double _blue;
    double _green;
    double _red;
}

@property(readonly, nonatomic) double red; // @synthesize red=_red;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveRed:(double)arg1;
- (double)primitiveRed;
- (void)setPrimitiveGreen:(double)arg1;
- (double)primitiveGreen;
- (void)setPrimitiveBlue:(double)arg1;
- (double)primitiveBlue;
- (void)setPrimitiveAlpha:(double)arg1;
- (double)primitiveAlpha;
- (void)setRed:(double)arg1;
- (void)setGreen:(double)arg1;
- (void)setBlue:(double)arg1;
- (void)setAlpha:(double)arg1;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

