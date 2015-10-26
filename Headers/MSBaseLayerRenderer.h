#import "NSObject.h"

@interface MSBaseLayerRenderer : NSObject
{
}

+ (void)drawCachedImage:(id)arg1 layer:(id)arg2 context:(id)arg3;
+ (void)doDrawLayer:(id)arg1 context:(id)arg2;
+ (id)cachedImageForLayer:(id)arg1 inContext:(id)arg2;
+ (void)drawLayer:(id)arg1 context:(id)arg2;

@end

