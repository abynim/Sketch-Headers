#import "NSObject.h"

@interface MSArtboardCanvasRenderer : NSObject
{
}

+ (id)artboards:(id)arg1 visibleInTileRect:(struct CGRect)arg2 zoomValue:(double)arg3;
+ (void)drawOutlinesForArtboards:(id)arg1 rect:(struct CGRect)arg2 zoomValue:(double)arg3;
+ (void)drawArtboardOutlines:(id)arg1 inRect:(struct CGRect)arg2 zoomValue:(double)arg3;

@end

