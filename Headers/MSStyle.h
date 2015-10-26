#import "_MSStyle.h"

#import "MSSharedObjectInstance.h"
#import "MSStylePartDelegate.h"
#import "NSCopying.h"

@class MSArtisticStroke, MSStyleBorder, MSStyleFill, MSStyleShadow, NSString;

@interface MSStyle : _MSStyle <MSStylePartDelegate, MSSharedObjectInstance, NSCopying>
{
    BOOL _lightweightHasBitmapStylesEnabled;
    MSArtisticStroke *_lightweightArtisticStroke;
}

+ (id)layerStyles;
@property(retain, nonatomic) MSArtisticStroke *lightweightArtisticStroke; // @synthesize lightweightArtisticStroke=_lightweightArtisticStroke;
@property(nonatomic) BOOL lightweightHasBitmapStylesEnabled; // @synthesize lightweightHasBitmapStylesEnabled=_lightweightHasBitmapStylesEnabled;
- (void).cxx_destruct;
- (double)thickestOuterStroke;
- (double)thickestInnerStroke;
- (BOOL)hasTextStyle;
- (unsigned long long)type;
- (id)parentStyle;
- (id)parentLayer;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (id)outlineStrokePath:(id)arg1;
- (BOOL)hasBitmapStylesEnabled;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (void)setTextStyle:(id)arg1;
- (void)layerStyleDidChange;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)hasBlending;
- (id)firstEnabledShadow;
- (id)enabledStyleParts:(id)arg1;
- (id)enabledInnerShadows;
- (id)enabledShadows;
- (id)enabledBorders;
- (id)enabledFills;
- (BOOL)hasEnabledBorder;
- (BOOL)hasMoreThanOneEnabledFill;
- (BOOL)hasEnabledFill;
- (BOOL)hasEnabledShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *innerShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *shadow;
@property(retain, nonatomic) MSStyleFill *fill;
@property(retain, nonatomic) MSStyleBorder *border;
- (id)renderBitmapEffects:(id)arg1;
- (unsigned long long)maxLevels;
- (void)addSVGFilterAttributes:(id)arg1 exporter:(id)arg2;
- (id)filtersForBlur:(id)arg1 exporter:(id)arg2;
- (id)filtersForShadow:(id)arg1 exporter:(id)arg2 isInner:(BOOL)arg3 index:(unsigned long long)arg4;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2 level:(unsigned long long)arg3 defaultNone:(BOOL)arg4;
- (id)itemFromCollection:(id)arg1 atLevel:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sharedObjectID;
@property(readonly) Class superclass;

@end

