#import "_MSBitmapLayer.h"

@interface MSBitmapLayer : _MSBitmapLayer
{
    BOOL _lightweightTreatAsAlpha;
}

+ (unsigned long long)traits;
@property(nonatomic) BOOL lightweightTreatAsAlpha; // @synthesize lightweightTreatAsAlpha=_lightweightTreatAsAlpha;
- (id)shasOfImagesUsedInLayer;
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
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;

@end

