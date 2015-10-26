#import "NSShadow.h"

@interface NSShadow (CHShadowExtensions)
+ (void)clearShadow;
+ (id)shadowWithColor:(id)arg1 offset:(struct CGSize)arg2 blur:(double)arg3;
@property(nonatomic) double blurRadius;
@property(nonatomic) double offsetY;
@property(nonatomic) double offsetX;
@end

