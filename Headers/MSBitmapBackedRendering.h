#import "NSObject.h"

@interface MSBitmapBackedRendering : NSObject
{
}

+ (void)renderLayer:(id)arg1 inRect:(struct CGRect)arg2 baseContext:(id)arg3;
+ (id)basicImageForLayer:(id)arg1 context:(id)arg2;
+ (id)imageToCacheForLayer:(id)arg1 context:(id)arg2;

@end

