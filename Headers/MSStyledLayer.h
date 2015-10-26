#import "_MSStyledLayer.h"

@interface MSStyledLayer : _MSStyledLayer
{
    BOOL ignoreStyleDidChangeNotifications;
    BOOL _lightweightHasBitmapStylesEnabled;
}

+ (void)pasteExportOptions:(id)arg1 onLayers:(id)arg2;
+ (void)pasteTextStyle:(id)arg1 onLayers:(id)arg2;
+ (void)pasteStyle:(id)arg1 onLayers:(id)arg2 imageCollection:(id)arg3;
+ (void)pasteStyleFromPasteboard:(id)arg1 onLayers:(id)arg2 imageCollection:(id)arg3;
@property(nonatomic) BOOL lightweightHasBitmapStylesEnabled; // @synthesize lightweightHasBitmapStylesEnabled=_lightweightHasBitmapStylesEnabled;
- (void)setStyle:(id)arg1;
- (id)usedStyle;
- (id)layersSharingStyle:(id)arg1;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (BOOL)calculateHasBlendedLayer;
- (void)multiplyBy:(double)arg1;
- (void)layerStyleDidChange;
- (struct CGRect)translateDirtyRectFromBoundsToFrame:(struct CGRect)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (id)appendShadowAttributesToString:(id)arg1;
- (id)CSSAttributes;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (id)commonColorsForBasicFill:(id)arg1;
- (id)commonColorsForStyle:(id)arg1;
- (id)commonColors;
- (void)changeColor:(id)arg1;
- (id)supportedPasteboardTypesForStyleCopying;
- (void)copyStyleToPasteboard:(id)arg1;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (unsigned long long)shouldDraw;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)renderBitmapEffects:(id)arg1;
- (void)addGradientsToDocument:(id)arg1;

@end

