#import "NSObject.h"

@interface MSCoreImageQueue : NSObject
{
}

+ (id)imageWithWhiteBackground:(id)arg1;
+ (id)clampImage:(id)arg1 forBlur:(id)arg2;
+ (id)applyEffect:(unsigned long long)arg1 fromSource:(id)arg2 toImage:(struct CGImage *)arg3;
+ (id)cachedImage:(struct CGImage *)arg1 withEffect:(unsigned long long)arg2 fromObject:(id)arg3 colorSpace:(id)arg4;
+ (void)drawImage:(struct CGImage *)arg1 withEffect:(unsigned long long)arg2 fromObject:(id)arg3 inContext:(id)arg4;
+ (void)initialize;

@end

