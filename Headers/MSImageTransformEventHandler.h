#import "MSTransformEventHandler.h"

@interface MSImageTransformEventHandler : MSTransformEventHandler
{
    struct CGImage *_originalImage;
}

- (void)dealloc;
- (void)handlerWillLoseFocus;
- (id)toolbarIdentifier;
- (id)perspectiveImage;
- (void)transformShape;
- (struct CGPoint)layerPointForCorner:(long long)arg1;
- (struct CGRect)newLayerRect;
- (struct CGPoint)pointForCorner:(long long)arg1 rect:(struct CGRect)arg2;
- (id)instructions;
- (struct CGRect)bounds;
- (void)handlerGotFocus;

@end

