#import "MSModelObject.h"

@class MSArray, MSImageCollection, MSSharedLayerContainer, MSSharedLayerStyleContainer, MSSharedLayerTextStyleContainer;

@interface _MSDocumentData : MSModelObject
{
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    unsigned long long _currentPageIndex;
    MSImageCollection *_images;
    MSSharedLayerStyleContainer *_layerStyles;
    MSSharedLayerContainer *_layerSymbols;
    MSSharedLayerTextStyleContainer *_layerTextStyles;
    MSArray *_pages;
}

@property(retain, nonatomic) MSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSSharedLayerTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSSharedLayerContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSSharedLayerStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSImageCollection *images; // @synthesize images=_images;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePages:(id)arg1;
- (id)primitivePages;
- (void)setPrimitiveLayerTextStyles:(id)arg1;
- (id)primitiveLayerTextStyles;
- (void)setPrimitiveLayerSymbols:(id)arg1;
- (id)primitiveLayerSymbols;
- (void)setPrimitiveLayerStyles:(id)arg1;
- (id)primitiveLayerStyles;
- (void)setPrimitiveImages:(id)arg1;
- (id)primitiveImages;
- (void)setPrimitiveEnableSliceInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableSliceInteraction;
- (void)setPrimitiveEnableLayerInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableLayerInteraction;
- (void)setPrimitiveCurrentPageIndex:(unsigned long long)arg1;
- (unsigned long long)primitiveCurrentPageIndex;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

