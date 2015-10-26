#import "MSImmutableStyledLayer.h"

@class MSImageProxy;

@interface _MSImmutableBitmapLayer : MSImmutableStyledLayer
{
    struct CGRect _clippingMask;
    MSImageProxy *_image;
    struct CGRect _nineSliceCenterRect;
    struct CGSize _nineSliceScale;
}

@property(nonatomic) struct CGSize nineSliceScale; // @synthesize nineSliceScale=_nineSliceScale;
@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) MSImageProxy *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

