#import "NSObject.h"

@interface MSLayerFlattener : NSObject
{
}

- (id)sliceFromLayers:(id)arg1 lightweightPage:(id)arg2;
- (struct CGRect)trimRectFromLayers:(id)arg1 lightweightPage:(id)arg2;
- (struct CGRect)rectFromLayers:(id)arg1;
- (id)bitmapFromRect:(struct CGRect)arg1 fromLayers:(id)arg2 withImage:(id)arg3;
- (struct CGRect)trimmedRectFromLayers:(id)arg1 lightweightPage:(id)arg2;
- (id)imageFromLayers:(id)arg1 lightweightPage:(id)arg2;
- (void)flattenLayers:(id)arg1;

@end

