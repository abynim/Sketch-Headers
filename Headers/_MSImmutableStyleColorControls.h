#import "MSImmutableStylePart.h"

@interface _MSImmutableStyleColorControls : MSImmutableStylePart
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
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

