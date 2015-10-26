#import "NSObject.h"

@class MSPage;

@interface MSTileRenderer : NSObject
{
    BOOL _shouldDrawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    MSPage *_page;
    double _zoomValue;
    struct CGRect _tileRect;
    struct CGRect _dirtyRect;
}

@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL shouldDrawPixelated; // @synthesize shouldDrawPixelated=_shouldDrawPixelated;
@property(nonatomic) struct CGRect tileRect; // @synthesize tileRect=_tileRect;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)prepareContext:(struct CGContext *)arg1;
- (id)contextWithCGContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
- (void)renderInContext:(struct CGContext *)arg1 colorSpace:(id)arg2;

@end

