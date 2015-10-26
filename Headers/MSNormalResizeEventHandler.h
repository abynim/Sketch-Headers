#import "MSNormalBaseEventHandler.h"

@class MSLayer, MSNormalEventData, MSSnapper;

@interface MSNormalResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    struct CGPoint oppositeRotatedPoint;
    double originalProportions;
    long long _resizingCorner;
    MSLayer *_resizingLayer;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
}

@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (long long)oppositeCorner;
- (void)handlerWillLoseFocus;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)flipResizingLayerIfNecessary:(struct CGPoint)arg1;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (struct CGRect)placeRectInOppositeCorner:(struct CGRect)arg1;
- (BOOL)shouldConstrainProportionsForFlags:(unsigned long long)arg1;
- (struct CGRect)makeRect:(struct CGRect)arg1 conformToProportions:(BOOL)arg2;
- (struct CGPoint)mouseAfterAccountingForRotation:(struct CGPoint)arg1;
- (void)makeLayerIntegral:(id)arg1;
- (struct CGRect)snapRect:(struct CGRect)arg1 constrainProportions:(BOOL)arg2;
- (struct CGRect)centerRect:(struct CGRect)arg1;
- (struct CGRect)newRectForResizeWithMouse:(struct CGPoint)arg1 fromCenter:(BOOL)arg2 maySnap:(BOOL)arg3 constrainProportions:(BOOL)arg4;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)calculateOppositeRotatedPoint;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)prepareForResize;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)currentGroup;

@end

