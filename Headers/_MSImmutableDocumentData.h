#import "MSImmutableModelBase.h"

@class MSImmutableArray, MSImmutableAssetCollection, MSImmutableSharedLayerContainer, MSImmutableSharedLayerStyleContainer, MSImmutableSharedLayerTextStyleContainer;

@interface _MSImmutableDocumentData : MSImmutableModelBase
{
    unsigned long long _currentPageIndex;
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    MSImmutableArray *_pages;
    MSImmutableAssetCollection *_assets;
    MSImmutableSharedLayerStyleContainer *_layerStyles;
    MSImmutableSharedLayerContainer *_layerSymbols;
    MSImmutableSharedLayerTextStyleContainer *_layerTextStyles;
}

@property(retain, nonatomic) MSImmutableSharedLayerTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSImmutableSharedLayerContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSImmutableSharedLayerStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSImmutableAssetCollection *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) MSImmutableArray *pages; // @synthesize pages=_pages;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

