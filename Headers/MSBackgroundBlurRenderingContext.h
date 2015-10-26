#import "MSRenderingContext.h"

@class MSLayer;

@interface MSBackgroundBlurRenderingContext : MSRenderingContext
{
    BOOL _stopDrawing;
    MSLayer *_untilLayer;
    struct CGAffineTransform _initialTransform;
}

@property(nonatomic) BOOL stopDrawing; // @synthesize stopDrawing=_stopDrawing;
@property(nonatomic) struct CGAffineTransform initialTransform; // @synthesize initialTransform=_initialTransform;
@property(retain, nonatomic) MSLayer *untilLayer; // @synthesize untilLayer=_untilLayer;
- (void).cxx_destruct;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)shouldDrawLayer:(id)arg1;

@end

