#import "MSModelBase.h"

@class MSArray, MSAssetCollection, MSSharedLayerContainer, MSSharedLayerStyleContainer, MSSharedLayerTextStyleContainer;

@interface _MSDocumentData : MSModelBase
{
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    unsigned long long _currentPageIndex;
    MSArray *_pages;
    MSAssetCollection *_assets;
    MSSharedLayerStyleContainer *_layerStyles;
    MSSharedLayerContainer *_layerSymbols;
    MSSharedLayerTextStyleContainer *_layerTextStyles;
}

@property(retain, nonatomic) MSSharedLayerTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSSharedLayerContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSSharedLayerStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSAssetCollection *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) MSArray *pages; // @synthesize pages=_pages;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveLayerTextStyles:(id)arg1;
- (id)primitiveLayerTextStyles;
- (void)setPrimitiveLayerSymbols:(id)arg1;
- (id)primitiveLayerSymbols;
- (void)setPrimitiveLayerStyles:(id)arg1;
- (id)primitiveLayerStyles;
- (void)setPrimitiveAssets:(id)arg1;
- (id)primitiveAssets;
- (void)setPrimitivePages:(id)arg1;
- (id)primitivePages;
- (void)setPrimitiveEnableSliceInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableSliceInteraction;
- (void)setPrimitiveEnableLayerInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableLayerInteraction;
- (void)setPrimitiveCurrentPageIndex:(unsigned long long)arg1;
- (unsigned long long)primitiveCurrentPageIndex;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

