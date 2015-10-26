#import "MSNormalBaseEventHandler.h"

@class MSLayer, MSLayerSnapper, MSNormalEventData;

@interface MSNormalResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    struct CGPoint oppositeRotatedPoint;
    double originalProportions;
    long long _resizingCorner;
    MSLayer *_resizingLayer;
    MSLayerSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
}

@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSLayerSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (id)oppositeCorner;
- (void)handlerWillLoseFocus;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)flipResizingLayerIfNecessary:(struct CGPoint)arg1;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (void)placeRectInOppositeCorner:(id)arg1;
- (BOOL)shouldConstrainProportionsForFlags:(unsigned long long)arg1;
- (void)makeRect:(id)arg1 conformToProportions:(BOOL)arg2;
- (struct CGPoint)mouseAfterAccountingForRotation:(struct CGPoint)arg1;
- (void)makeLayersIntegral:(id)arg1;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)calculateOppositeRotatedPoint;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)defineProportionsOnLayer;
- (void)storeCurrentLayerFrame;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (id)currentGroup;

@end

