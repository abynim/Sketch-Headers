#import "MSImmutableLayerGroup.h"

@interface _MSImmutableShapeGroup : MSImmutableLayerGroup
{
    long long _clippingMaskMode;
    BOOL _hasClippingMask;
    unsigned long long _windingRule;
}

@property(nonatomic) unsigned long long windingRule; // @synthesize windingRule=_windingRule;
@property(nonatomic) BOOL hasClippingMask; // @synthesize hasClippingMask=_hasClippingMask;
@property(nonatomic) long long clippingMaskMode; // @synthesize clippingMaskMode=_clippingMaskMode;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

