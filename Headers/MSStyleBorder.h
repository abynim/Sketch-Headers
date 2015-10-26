#import "_MSStyleBorder.h"

@interface MSStyleBorder : _MSStyleBorder
{
}

+ (id)defaultFillColor;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setPosition:(long long)arg1;
- (void)setThickness:(double)arg1;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (long long)patternFillType;
- (double)noiseIntensity;
- (id)defaultName;
- (void)initEmptyObject;
- (id)topViewForColorInspector:(id)arg1;
- (id)blendingViewForColorInspector:(id)arg1;
- (id)CSSAttributeString;
- (void)updateColorCounter:(id)arg1;
- (void)drawGradientBorder:(id)arg1 originalPath:(id)arg2 isArtistic:(BOOL)arg3 frame:(struct CGRect)arg4 context:(id)arg5;
- (void)drawBorder:(id)arg1 advancedOptions:(id)arg2 context:(id)arg3;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;

@end

