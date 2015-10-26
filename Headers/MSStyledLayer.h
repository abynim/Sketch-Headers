#import "_MSStyledLayer.h"

@interface MSStyledLayer : _MSStyledLayer
{
    BOOL ignoreStyleDidChangeNotifications;
    BOOL _lightweightHasBitmapStylesEnabled;
}

+ (unsigned long long)traits;
+ (void)pasteExportOptions:(id)arg1 onLayers:(id)arg2;
+ (void)pasteTextStyle:(id)arg1 onLayers:(id)arg2;
+ (void)pasteStyleDict:(id)arg1 onLayers:(id)arg2 document:(id)arg3;
+ (void)pasteStyleFromPasteboard:(id)arg1 onLayers:(id)arg2 document:(id)arg3;
+ (void)pasteStyleFromPasteboardOnLayers:(id)arg1 document:(id)arg2;
+ (id)supportedPasteboardTypesForStyleCopying;
@property(nonatomic) BOOL lightweightHasBitmapStylesEnabled; // @synthesize lightweightHasBitmapStylesEnabled=_lightweightHasBitmapStylesEnabled;
- (void)setStyle:(id)arg1;
- (id)usedStyle;
- (id)layersSharingStyle:(id)arg1;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (BOOL)calculateHasBlendedLayer;
- (void)multiplyBy:(double)arg1;
- (void)layerStyleDidChange;
- (struct CGRect)translateInfluenceRectFromBoundsToFrame:(struct CGRect)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (BOOL)isSharedObject;
- (id)appendShadowAttributesToString:(id)arg1;
- (id)CSSAttributes;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (void)changeColor:(id)arg1;
- (id)copiedStyleAttributesForLayer:(id)arg1;
- (void)writeStyleToPasteboard:(id)arg1;
- (void)copyStyleToPasteboard:(id)arg1;
- (id)copyStyleToPasteboard;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (void)trackColorsForBasicFill:(id)arg1 tracker:(id)arg2;
- (void)trackColors:(id)arg1;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (unsigned long long)shouldDraw;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)renderBitmapEffects:(id)arg1;
- (void)addGradientsToDocument:(id)arg1;

@end

