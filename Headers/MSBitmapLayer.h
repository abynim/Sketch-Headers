#import "_MSBitmapLayer.h"

@interface MSBitmapLayer : _MSBitmapLayer
{
    BOOL _lightweightTreatAsAlpha;
}

@property(nonatomic) BOOL lightweightTreatAsAlpha; // @synthesize lightweightTreatAsAlpha=_lightweightTreatAsAlpha;
- (void)reduceImageSize;
- (struct CGSize)minimumSize;
- (id)handlerName;
- (void)prepareObjectCopy:(id)arg1;
- (id)defaultName;
- (void)encodeWithCoder:(id)arg1;
- (void)initEmptyObject;
- (void)setRawImage:(id)arg1 convertColourspace:(BOOL)arg2 collection:(id)arg3;
- (void)fillInEmptyObjects;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 parentFrame:(id)arg2 name:(id)arg3;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;

@end

