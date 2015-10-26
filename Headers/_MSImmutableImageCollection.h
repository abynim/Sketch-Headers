#import "MSImmutableModelBase.h"

@class NSDictionary;

@interface _MSImmutableImageCollection : MSImmutableModelBase
{
    NSDictionary *_images;
}

@property(retain, nonatomic) NSDictionary *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

