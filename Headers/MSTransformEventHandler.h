#import "MSPointsEventHandler.h"

@class DKDistortionTransform, MSLayerGroup, MSPointArray, MSShapeDictionary, NSMutableArray;

@interface MSTransformEventHandler : MSPointsEventHandler
{
    MSShapeDictionary *shapeDictionary;
    MSLayerGroup *currentGroup;
    struct CGRect originalRect;
    unsigned long long directionLock;
    struct CGPoint firstSelectedLocation;
    DKDistortionTransform *_transform;
    MSPointArray *_transformPoints;
    MSPointArray *_mouseDownPoints;
    NSMutableArray *_originalPoints;
}

@property(retain, nonatomic) NSMutableArray *originalPoints; // @synthesize originalPoints=_originalPoints;
@property(retain, nonatomic) MSPointArray *mouseDownPoints; // @synthesize mouseDownPoints=_mouseDownPoints;
@property(retain, nonatomic) MSPointArray *transformPoints; // @synthesize transformPoints=_transformPoints;
@property(retain, nonatomic) DKDistortionTransform *transform; // @synthesize transform=_transform;
- (void).cxx_destruct;
- (void)dealloc;
- (void)concatTransformsForDrawSnaps;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (BOOL)shouldDrawLayerSelection;
- (void)drawHandleLines;
- (void)resetTransformsForLayer:(id)arg1;
- (void)transformShape;
- (id)cursorForCorner:(long long)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (id)bounds;
- (id)currentGroup;
- (void)movePointsRelatedToCorner:(long long)arg1 newLocation:(struct CGPoint)arg2 previous:(struct CGPoint)arg3;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)replacePointAtIndexWithUndo:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)replacePointAtCorner:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (struct CGPoint)pointAtCorner:(long long)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (id)points;
- (void)handlerWillLoseFocus;
- (id)snapsForShape;
- (id)pointsToSnap;
- (void)recordOriginalShapes;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

