#import "MSImmutableStyleBasicFill.h"

@interface _MSImmutableStyleBorder : MSImmutableStyleBasicFill
{
    long long _position;
    double _thickness;
}

@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) long long position; // @synthesize position=_position;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

