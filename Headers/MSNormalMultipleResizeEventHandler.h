#import "MSNormalBaseEventHandler.h"

@class MSLayerSnapper, MSNormalEventData, MSRect, NSArray;

@interface MSNormalMultipleResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    MSRect *originalRect;
    NSArray *originalLayerRects;
    NSArray *_layers;
    long long _resizingCorner;
    MSLayerSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
}

@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSLayerSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (id)oppositeCorner;
- (void)handlerWillLoseFocus;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)placeRectInOppositeCorner:(id)arg1;
- (void)makeRectConform:(id)arg1 toProportions:(BOOL)arg2;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)storeCurrentLayerFrame;
- (void)pushTransformsDown:(id)arg1;
- (void)flattenRotatedShapes;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;

@end

