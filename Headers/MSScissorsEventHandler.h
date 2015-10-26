#import "MSEventHandler.h"

@class MSShapeGroup, NSBezierPath;

@interface MSScissorsEventHandler : MSEventHandler
{
    unsigned long long hoveringBeforePointIndex;
    BOOL hasDoneFirstCut;
    BOOL didCutOnMouseDown;
    MSShapeGroup *_shape;
    NSBezierPath *_cachedBezier;
}

@property(retain, nonatomic) NSBezierPath *cachedBezier; // @synthesize cachedBezier=_cachedBezier;
@property(retain, nonatomic) MSShapeGroup *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (id)bezierPathWithMoveToReplacedByLines;
- (BOOL)shouldDrawLayerSelection;
- (id)imageName;
- (id)defaultCursor;
- (void)setScissorsCursor;
- (BOOL)canCutPaths;
- (void)drawInRect:(struct CGRect)arg1;
- (void)cut;
- (void)replaceClosePathByLineIfNecessary;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (unsigned long long)hoveringBeforePointIndexWithMouse:(struct CGPoint)arg1;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (void)updateBezierPath:(id)arg1;
- (id)toolbarIdentifier;
- (void)handlerWillLoseFocus;
- (void)undoNotification:(id)arg1;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

