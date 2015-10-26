#import "MSBaseLayerRenderer.h"

@interface MSTextLayerRenderer : MSBaseLayerRenderer
{
}

+ (void)_drawLayer:(id)arg1 onPath:(id)arg2 atLength:(long long)arg3 context:(id)arg4;
+ (void)drawLayer:(id)arg1 onPath:(id)arg2 atLength:(long long)arg3 context:(id)arg4;
+ (double)startingPositionForTextLayer:(id)arg1 onShape:(id)arg2;
+ (void)drawTextLayerInsideTransform:(id)arg1 context:(id)arg2;
+ (void)drawTextLayer:(id)arg1 onUnderlyingPath:(id)arg2 context:(id)arg3;
+ (void)doDrawLayer:(id)arg1 context:(id)arg2;

@end

