#import "MSBaseRenderer.h"

@class MSRenderingContext, MSStyleFill, NSBezierPath;

@interface MSStyleFillRenderer : MSBaseRenderer
{
    BOOL _hasInnerStroke;
    MSRenderingContext *_context;
    MSStyleFill *_fill;
    NSBezierPath *_path;
    long long _fillIndex;
    double _zoomValue;
    struct CGRect _rect;
}

+ (void)drawFill:(id)arg1 forPath:(id)arg2 atIndex:(long long)arg3 inRect:(struct CGRect)arg4 hasInnerStroke:(BOOL)arg5 context:(id)arg6;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) BOOL hasInnerStroke; // @synthesize hasInnerStroke=_hasInnerStroke;
@property(nonatomic) long long fillIndex; // @synthesize fillIndex=_fillIndex;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) MSStyleFill *fill; // @synthesize fill=_fill;
@property(nonatomic) __weak MSRenderingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)drawPatternStretch;
- (void)prepareAlphaForContext:(struct CGContext *)arg1;
- (void)drawCGImageTile:(struct CGImage *)arg1;
- (struct CGImage *)CGImageForPatternTile;
- (void)drawPatternTile;
- (void)drawNoise;
- (void)drawPatternFill;
- (void)drawGradientFill;
- (void)drawColorFill;
- (long long)graphicsSettings;
- (void)render;

@end

