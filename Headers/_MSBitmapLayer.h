#import "MSStyledLayer.h"

@class MSImageProxy;

@interface _MSBitmapLayer : MSStyledLayer
{
    MSImageProxy *_image;
    struct CGSize _nineSliceScale;
    struct CGRect _clippingMask;
    struct CGRect _nineSliceCenterRect;
}

@property(nonatomic) struct CGSize nineSliceScale; // @synthesize nineSliceScale=_nineSliceScale;
@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) MSImageProxy *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveNineSliceScale:(struct CGSize)arg1;
- (struct CGSize)primitiveNineSliceScale;
- (void)setPrimitiveNineSliceCenterRect:(struct CGRect)arg1;
- (struct CGRect)primitiveNineSliceCenterRect;
- (void)setPrimitiveImage:(id)arg1;
- (id)primitiveImage;
- (void)setPrimitiveClippingMask:(struct CGRect)arg1;
- (struct CGRect)primitiveClippingMask;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

