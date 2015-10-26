#import "NSObject.h"

@interface MSLayerSelectionDrawing : NSObject
{
}

+ (BOOL)layerIsLine:(id)arg1;
+ (void)drawSelectionHandlersForLayer:(id)arg1;
+ (void)drawSelectionStrokeForLayer:(id)arg1;
+ (BOOL)shouldDrawSelectionStrokeForLayer:(id)arg1;
+ (void)drawSelectionForLayer:(id)arg1;

@end

