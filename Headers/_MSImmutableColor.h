#import "MSImmutableModelBase.h"

@interface _MSImmutableColor : MSImmutableModelBase
{
    double _alpha;
    double _blue;
    double _green;
    double _red;
}

@property(nonatomic) double red; // @synthesize red=_red;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

