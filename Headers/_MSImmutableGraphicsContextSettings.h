#import "MSImmutableModelBase.h"

@interface _MSImmutableGraphicsContextSettings : MSImmutableModelBase
{
    long long _blendMode;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

