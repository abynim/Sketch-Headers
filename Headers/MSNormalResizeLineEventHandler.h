#import "MSNormalBaseEventHandler.h"

@class MSLayerSnapper, MSNormalEventData, MSShapeGroup;

@interface MSNormalResizeLineEventHandler : MSNormalBaseEventHandler
{
    MSShapeGroup *_lineShape;
    long long _pointIndex;
    MSLayerSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
}

@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSLayerSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(nonatomic) long long pointIndex; // @synthesize pointIndex=_pointIndex;
@property(retain, nonatomic) MSShapeGroup *lineShape; // @synthesize lineShape=_lineShape;
- (void).cxx_destruct;
- (struct CGPoint)roundMouse:(struct CGPoint)arg1;
- (id)cursorForDegrees:(long long)arg1;
- (void)displayResizeCursor;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)alignPoint:(struct CGPoint)arg1 withShiftTo:(struct CGPoint)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;

@end

