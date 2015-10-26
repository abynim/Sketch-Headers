#import "MSPointsEventHandler.h"

@interface MSNineSliceEventHandler : MSPointsEventHandler
{
    struct CGRect _originalRect;
}

@property(nonatomic) struct CGRect originalRect; // @synthesize originalRect=_originalRect;
- (void)drawHandleLines;
- (id)snapsForShape;
- (void)didUndoNotification:(id)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)points;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

