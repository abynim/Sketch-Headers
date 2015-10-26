#import "MSGradientEventHandler.h"

@interface MSAngularGradientEventHandler : MSGradientEventHandler
{
}

- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (BOOL)canInsertPointAtMouse:(struct CGPoint)arg1;
- (id)handleLinesPath;
- (double)positionForStop:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (struct CGPoint)basePointAtIndex:(unsigned long long)arg1;
- (struct CGRect)bounds;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (void)repairGradientIfNecessary;

@end

