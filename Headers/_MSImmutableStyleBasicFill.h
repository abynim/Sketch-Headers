#import "MSImmutableStylePart.h"

@class MSImmutableColor, MSImmutableGradient, MSImmutableGraphicsContextSettings;

@interface _MSImmutableStyleBasicFill : MSImmutableStylePart
{
    unsigned long long _fillType;
    MSImmutableColor *_color;
    MSImmutableGraphicsContextSettings *_contextSettings;
    MSImmutableGradient *_gradient;
}

@property(retain, nonatomic) MSImmutableGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

