#import "MSBaseRenderTile.h"

@class MSContentDrawView, MSContentTile, MSEventHandlerManager, MSOverlayTile, MSPage, NSArray, NSColorSpace, NSThread;

@interface MSTile : MSBaseRenderTile
{
    BOOL _drawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    BOOL _shouldHideOverlayControls;
    double _zoomValue;
    MSEventHandlerManager *_handlerManager;
    id <MSTileDelegate> _tileDelegate;
    MSContentDrawView *_parentView;
    MSOverlayTile *_overlayTile;
    MSContentTile *_contentTile;
    NSThread *_thread;
    MSPage *_pageForContent;
    MSPage *_pageForOverlay;
    NSColorSpace *_colorSpaceForContent;
    NSArray *_artboardFrames;
    struct CGPoint _distanceFromScrollOrigin;
}

@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) NSColorSpace *colorSpaceForContent; // @synthesize colorSpaceForContent=_colorSpaceForContent;
@property(retain, nonatomic) MSPage *pageForOverlay; // @synthesize pageForOverlay=_pageForOverlay;
@property(retain, nonatomic) MSPage *pageForContent; // @synthesize pageForContent=_pageForContent;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
@property(retain, nonatomic) MSOverlayTile *overlayTile; // @synthesize overlayTile=_overlayTile;
@property(nonatomic) __weak MSContentDrawView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) __weak id <MSTileDelegate> tileDelegate; // @synthesize tileDelegate=_tileDelegate;
@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL drawPixelated; // @synthesize drawPixelated=_drawPixelated;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
- (void).cxx_destruct;
- (id)description;
- (void)moveToPosition:(struct CGPoint)arg1;
- (struct CGRect)rectForContentTile;
- (double)scaleForContentTile;
- (void)pixelGridDidChange;
- (void)drawPage:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawArtboardBackgroundsInContext:(struct CGContext *)arg1;
- (void)drawContentInContext:(struct CGContext *)arg1;
- (void)drawOverlayInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
- (void)refreshOverlayRect:(struct CGRect)arg1 page:(id)arg2;
- (void)scheduleContentRefresh:(id)arg1;
- (void)refreshContentRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldDrawPixelated;
- (void)enableDebugFramesInner:(BOOL)arg1 outer:(BOOL)arg2;
- (id)init;

@end

