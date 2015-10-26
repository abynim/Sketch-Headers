#import "_MSBitmapLayer.h"

#import "MSImageOwner.h"

@class NSString;

@interface MSBitmapLayer : _MSBitmapLayer <MSImageOwner>
{
    BOOL _lightweightTreatAsAlpha;
}

+ (unsigned long long)traits;
+ (id)bitmapLayerFromImage:(id)arg1;
+ (id)bitmapLayerWithImageFromPath:(id)arg1;
+ (id)bitmapLayerWithImageFromPasteboard:(id)arg1;
@property(nonatomic) BOOL lightweightTreatAsAlpha; // @synthesize lightweightTreatAsAlpha=_lightweightTreatAsAlpha;
- (id)NSImage;
- (BOOL)hasNineSliceEnabled;
- (void)reduceImageSize;
- (struct CGSize)minimumSize;
- (id)handlerName;
- (void)prepareObjectCopy:(id)arg1;
- (id)defaultName;
- (void)initEmptyObject;
- (void)fillInEmptyObjects;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)addImageOwnersToSet:(id)arg1;
- (void)migratePropertiesFromV59OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV56OrEarlierWithCoder:(id)arg1;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

