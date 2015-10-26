#import "MSLayerGroup.h"

@class MSArtisticStroke, MSPathDecorationStyle;

@interface _MSShapeGroup : MSLayerGroup
{
    BOOL _hasClippingMask;
    MSArtisticStroke *_artisticStroke;
    long long _clippingMaskMode;
    unsigned long long _endDecorationType;
    MSPathDecorationStyle *_pathStyle;
    unsigned long long _startDecorationType;
    unsigned long long _windingRule;
}

@property(nonatomic) unsigned long long windingRule; // @synthesize windingRule=_windingRule;
@property(nonatomic) unsigned long long startDecorationType; // @synthesize startDecorationType=_startDecorationType;
@property(retain, nonatomic) MSPathDecorationStyle *pathStyle; // @synthesize pathStyle=_pathStyle;
@property(nonatomic) BOOL hasClippingMask; // @synthesize hasClippingMask=_hasClippingMask;
@property(nonatomic) unsigned long long endDecorationType; // @synthesize endDecorationType=_endDecorationType;
@property(nonatomic) long long clippingMaskMode; // @synthesize clippingMaskMode=_clippingMaskMode;
@property(retain, nonatomic) MSArtisticStroke *artisticStroke; // @synthesize artisticStroke=_artisticStroke;
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
- (void)setPrimitiveWindingRule:(unsigned long long)arg1;
- (unsigned long long)primitiveWindingRule;
- (void)setPrimitiveStartDecorationType:(unsigned long long)arg1;
- (unsigned long long)primitiveStartDecorationType;
- (void)setPrimitivePathStyle:(id)arg1;
- (id)primitivePathStyle;
- (void)setPrimitiveHasClippingMask:(BOOL)arg1;
- (BOOL)primitiveHasClippingMask;
- (void)setPrimitiveEndDecorationType:(unsigned long long)arg1;
- (unsigned long long)primitiveEndDecorationType;
- (void)setPrimitiveClippingMaskMode:(long long)arg1;
- (long long)primitiveClippingMaskMode;
- (void)setPrimitiveArtisticStroke:(id)arg1;
- (id)primitiveArtisticStroke;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

