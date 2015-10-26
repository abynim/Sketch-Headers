#import "MSImmutableModelBase.h"

@class MSImmutableArray;

@interface _MSImmutableExportOptions : MSImmutableModelBase
{
    MSImmutableArray *_includedLayerIds;
    unsigned long long _layerOptions;
    BOOL _shouldTrim;
    MSImmutableArray *_sizes;
}

@property(retain, nonatomic) MSImmutableArray *sizes; // @synthesize sizes=_sizes;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long layerOptions; // @synthesize layerOptions=_layerOptions;
@property(retain, nonatomic) MSImmutableArray *includedLayerIds; // @synthesize includedLayerIds=_includedLayerIds;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

