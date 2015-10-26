#import "MSLayerGroupRenderer.h"

@interface MSArtboardGroupRenderer : MSLayerGroupRenderer
{
}

+ (BOOL)shouldDrawArtboardBackground:(id)arg1 context:(id)arg2;
+ (void)renderSubLayersOfGroup:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;

@end

