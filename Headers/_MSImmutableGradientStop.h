#import "MSImmutableModelBase.h"

@class MSImmutableColor;

@interface _MSImmutableGradientStop : MSImmutableModelBase
{
    double _position;
    MSImmutableColor *_color;
}

@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

