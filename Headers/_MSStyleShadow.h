#import "MSStylePart.h"

@class MSColor, MSGraphicsContextSettings;

@interface _MSStyleShadow : MSStylePart
{
    BOOL _hasShadow;
    double _blurRadius;
    MSColor *_color;
    MSGraphicsContextSettings *_contextSettings;
    double _offsetX;
    double _offsetY;
    double _spread;
}

@property(nonatomic) double spread; // @synthesize spread=_spread;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(copy, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
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
- (void)setPrimitiveSpread:(double)arg1;
- (double)primitiveSpread;
- (void)setPrimitiveOffsetY:(double)arg1;
- (double)primitiveOffsetY;
- (void)setPrimitiveOffsetX:(double)arg1;
- (double)primitiveOffsetX;
- (void)setPrimitiveHasShadow:(BOOL)arg1;
- (BOOL)primitiveHasShadow;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)setPrimitiveBlurRadius:(double)arg1;
- (double)primitiveBlurRadius;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

