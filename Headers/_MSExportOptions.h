#import "MSModelBase.h"

@class MSArray;

@interface _MSExportOptions : MSModelBase
{
    BOOL _shouldTrim;
    MSArray *_includedLayerIds;
    unsigned long long _layerOptions;
    MSArray *_sizes;
}

@property(retain, nonatomic) MSArray *sizes; // @synthesize sizes=_sizes;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long layerOptions; // @synthesize layerOptions=_layerOptions;
@property(retain, nonatomic) MSArray *includedLayerIds; // @synthesize includedLayerIds=_includedLayerIds;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveSizes:(id)arg1;
- (id)primitiveSizes;
- (void)setPrimitiveShouldTrim:(BOOL)arg1;
- (BOOL)primitiveShouldTrim;
- (void)setPrimitiveLayerOptions:(unsigned long long)arg1;
- (unsigned long long)primitiveLayerOptions;
- (void)setPrimitiveIncludedLayerIds:(id)arg1;
- (id)primitiveIncludedLayerIds;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

