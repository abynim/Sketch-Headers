#import "MSStylePart.h"

@interface _MSStyleColorControls : MSStylePart
{
    double _brightness;
    double _contrast;
    double _saturation;
}

@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveSaturation:(double)arg1;
- (double)primitiveSaturation;
- (void)setPrimitiveContrast:(double)arg1;
- (double)primitiveContrast;
- (void)setPrimitiveBrightness:(double)arg1;
- (double)primitiveBrightness;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

