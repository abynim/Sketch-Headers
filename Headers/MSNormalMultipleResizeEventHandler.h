#import "MSNormalBaseEventHandler.h"

@class MSNormalEventData, MSSnapper, NSArray;

@interface MSNormalMultipleResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    NSArray *originalLayerRects;
    NSArray *_layers;
    long long _resizingCorner;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
    double _originalProportions;
    struct CGRect _originalRect;
}

@property(nonatomic) double originalProportions; // @synthesize originalProportions=_originalProportions;
@property(nonatomic) struct CGRect originalRect; // @synthesize originalRect=_originalRect;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (long long)oppositeCorner;
- (void)handlerWillLoseFocus;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGRect)placeRectInOppositeCorner:(struct CGRect)arg1;
- (struct CGRect)makeRectConform:(struct CGRect)arg1 toProportions:(BOOL)arg2;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (void)refresh;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)storeCurrentLayerFrame;
- (void)pushTransformsDown:(id)arg1;
- (void)flattenRotatedShapes;
- (void)drawInRect:(struct CGRect)arg1;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;

@end

