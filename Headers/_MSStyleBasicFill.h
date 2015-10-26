#import "MSStylePart.h"

@class MSColor, MSGradient, MSGraphicsContextSettings;

@interface _MSStyleBasicFill : MSStylePart
{
    unsigned long long _fillType;
    MSColor *_color;
    MSGraphicsContextSettings *_contextSettings;
    MSGradient *_gradient;
}

@property(retain, nonatomic) MSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveGradient:(id)arg1;
- (id)primitiveGradient;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)setPrimitiveFillType:(unsigned long long)arg1;
- (unsigned long long)primitiveFillType;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

