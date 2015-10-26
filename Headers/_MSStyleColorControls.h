#import "MSStylePart.h"

@interface _MSStyleColorControls : MSStylePart
{
    double _brightness;
    double _contrast;
    double _hue;
    double _saturation;
}

@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double hue; // @synthesize hue=_hue;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveSaturation:(double)arg1;
- (double)primitiveSaturation;
- (void)setPrimitiveHue:(double)arg1;
- (double)primitiveHue;
- (void)setPrimitiveContrast:(double)arg1;
- (double)primitiveContrast;
- (void)setPrimitiveBrightness:(double)arg1;
- (double)primitiveBrightness;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

