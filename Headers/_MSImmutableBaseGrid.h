#import "MSImmutableModelBase.h"

@interface _MSImmutableBaseGrid : MSImmutableModelBase
{
    BOOL _isEnabled;
}

@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

