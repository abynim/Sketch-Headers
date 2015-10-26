#import "MSEventHandler.h"

@class MSNormalEventData;

@interface MSDragRectEventHandler : MSEventHandler
{
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
    BOOL _handToolActive;
    MSNormalEventData *eventData;
}

- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)shouldHideExportBar;
- (BOOL)shouldDrawLayerSelection;
- (void)flagsChanged:(id)arg1;
- (id)layerSnapper;
- (void)drawHeight:(double)arg1 ofRect:(id)arg2;
- (void)drawWidth:(double)arg1 ofRect:(id)arg2;
- (void)drawRectMeasurements;
- (void)prepareGraphicsContext;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1;
- (id)currentGroup;
- (BOOL)handlesHandToolItself;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (id)rectForInserting;
- (id)performActionWithRect:(id)arg1;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

