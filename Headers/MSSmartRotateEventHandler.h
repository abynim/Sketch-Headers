#import "MSEventHandler.h"

@class NSArray;

@interface MSSmartRotateEventHandler : MSEventHandler
{
    struct CGPoint rotationCenter;
    BOOL hasRotationCenterSelected;
    unsigned long long _numberOfRepetitions;
    NSArray *_shapeLayers;
    NSArray *_shapeLayersCopies;
}

@property(copy, nonatomic) NSArray *shapeLayersCopies; // @synthesize shapeLayersCopies=_shapeLayersCopies;
@property(copy, nonatomic) NSArray *shapeLayers; // @synthesize shapeLayers=_shapeLayers;
@property(nonatomic) unsigned long long numberOfRepetitions; // @synthesize numberOfRepetitions=_numberOfRepetitions;
- (void).cxx_destruct;
- (BOOL)shouldDrawLayerSelection;
- (id)imageName;
- (id)toolbarIdentifier;
- (void)dealloc;
- (void)willUndo:(id)arg1;
- (void)unregisterUndoObserver;
- (void)registerUndoObserver;
- (double)rotationForRepetitionAtIndex:(unsigned long long)arg1;
- (void)drawControlPoints;
- (void)drawInRect:(struct CGRect)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)tryToSnapPoint:(struct CGPoint)arg1 toMid:(struct CGPoint)arg2;
- (void)rotateCopies;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)currentGroup;
- (void)adjustGroup;
- (id)transformForRotatingShape:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)adjustFrameForShapeCopy:(id)arg1 shape:(id)arg2 index:(unsigned long long)arg3;
- (void)adjustBooleanOperationForShapeCopyIfNecessary:(id)arg1;
- (void)adjustRotationForShapeCopy:(id)arg1 atIndex:(unsigned long long)arg2 baseRotation:(double)arg3;
- (void)rotateCopy:(id)arg1 ofShape:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)rotateCopiesForShape:(id)arg1 shapeIndex:(unsigned long long)arg2;
- (void)handlerWillLoseFocus;
- (void)determineOriginalRotationCenter;
- (void)createShapeCopies;
- (void)findShapes;
- (void)handlerGotFocus;

@end

