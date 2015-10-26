#import "NSObject.h"

@interface MSLayerSelectionDrawing : NSObject
{
}

+ (BOOL)layerIsLine:(id)arg1;
+ (void)drawSelectionHandlersForLayer:(id)arg1 zoomValue:(double)arg2;
+ (void)drawSelectionStrokeForLayer:(id)arg1 zoomValue:(double)arg2;
+ (BOOL)shouldDrawSelectionStrokeForLayer:(id)arg1;
+ (void)drawSelectionForLayer:(id)arg1 zoomValue:(double)arg2;

@end

