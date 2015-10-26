#import "MSTransformEventHandler.h"

@class CIImage, GKRect;

@interface MSImageTransformEventHandler : MSTransformEventHandler
{
    CIImage *originalImage;
    GKRect *_originalBounds;
}

@property(retain, nonatomic) GKRect *originalBounds; // @synthesize originalBounds=_originalBounds;
- (void).cxx_destruct;
- (id)toolbarIdentifier;
- (void)dealloc;
- (id)NSImageFromImage:(id)arg1;
- (void)transformShape;
- (struct CGRect)newLayerRect;
- (id)perspectiveFilter;
- (id)bounds;
- (void)handlerGotFocus;

@end

