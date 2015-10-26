#import "MSGradientEventHandler.h"

@interface MSRadialGradientEventHandler : MSGradientEventHandler
{
    BOOL ellipseSelected;
    struct CGSize deltaBetweenRadialPointBeforeDrag;
}

- (void)setEllipsePoint:(struct CGPoint)arg1;
- (struct CGPoint)ellipsePoint;
- (void)refreshOval;
- (id)ovalPath;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)drawInRect:(struct CGRect)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)hasSelectedPoint;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseIsNearEllipsePoint:(struct CGPoint)arg1;

@end

