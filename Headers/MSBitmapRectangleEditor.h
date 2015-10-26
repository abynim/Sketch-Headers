#import "MSBitmapEditor.h"

@class NSBezierPath;

@interface MSBitmapRectangleEditor : MSBitmapEditor
{
    BOOL _didDrag;
    long long _dragMode;
    NSBezierPath *_selectionBeforeDrag;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _mouseEndPoint;
}

@property(retain, nonatomic) NSBezierPath *selectionBeforeDrag; // @synthesize selectionBeforeDrag=_selectionBeforeDrag;
@property(nonatomic) struct CGPoint mouseEndPoint; // @synthesize mouseEndPoint=_mouseEndPoint;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
- (void).cxx_destruct;
- (struct CGRect)rectFromDraggingPoints;
- (struct CGSize)sizeForLabel;
- (void)draw;
- (void)resetDraggingPoints;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)init;

@end

