#import "NSObject.h"

@class MSRenderingContext, MSShapeGroup, NSBezierPath;

@interface MSBackgroundBlurRenderer : NSObject
{
    MSRenderingContext *_context;
    MSShapeGroup *_layer;
    NSBezierPath *_path;
}

+ (void)blurBackgroundBehindLayer:(id)arg1 path:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) MSShapeGroup *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak MSRenderingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)blur;
- (void)renderCanvasImageInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (struct CGRect)absoluteRectForLayer:(id)arg1 context:(id)arg2;
- (void)blurBackgroundWithContext:(id)arg1;

@end

