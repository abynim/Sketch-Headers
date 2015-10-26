#import "NSObject.h"

@interface MSLayerStylePreviewGenerator : NSObject
{
}

+ (struct CGRect)adjustDrawRect:(struct CGRect)arg1 forStyle:(id)arg2;
+ (id)previewForStyle:(id)arg1 atSize:(struct CGSize)arg2;
+ (void)generateImageForLayerStyle:(id)arg1 imageSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

