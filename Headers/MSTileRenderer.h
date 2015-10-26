#import "NSObject.h"

@class MSPage, MSRenderingContext;

@interface MSTileRenderer : NSObject
{
    BOOL _shouldDrawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    BOOL _cancelled;
    MSPage *_page;
    double _backingScale;
    double _zoomValue;
    MSRenderingContext *_context;
    struct CGRect _tileRect;
    struct CGRect _dirtyRect;
}

@property(retain) MSRenderingContext *context; // @synthesize context=_context;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL shouldDrawPixelated; // @synthesize shouldDrawPixelated=_shouldDrawPixelated;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(nonatomic) struct CGRect tileRect; // @synthesize tileRect=_tileRect;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)prepareContext:(struct CGContext *)arg1;
- (id)contextWithCGContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
- (void)cancel;
- (void)renderInContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
- (id)init;

@end

