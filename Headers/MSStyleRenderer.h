#import "MSBaseRenderer.h"

@class MSRenderingContext, MSStyle, NSBezierPath;

@interface MSStyleRenderer : MSBaseRenderer
{
    NSBezierPath *_path;
    MSStyle *_style;
    MSRenderingContext *_context;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) __weak MSRenderingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MSStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)drawBorders;
- (void)applyDashPatternToBezierPath;
- (void)drawFills;
- (BOOL)shouldSkipDrawingShadow:(id)arg1;
- (BOOL)shouldAdvancedClipToAvoidOuterStrokeStrokeBleed;
- (BOOL)shouldAdvancedClipToAvoidInnerStrokeBleed;
- (id)clipPathForOuterStroke;
- (void)addClipForBlock:(CDUnknownBlockType)arg1;

@end

