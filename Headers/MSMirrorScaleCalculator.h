#import "NSObject.h"

@interface MSMirrorScaleCalculator : NSObject
{
}

+ (double)scaleForDevice:(id)arg1 artboardSize:(struct CGSize)arg2;
+ (id)scalesNeededForSize:(struct CGSize)arg1 clients:(id)arg2;
+ (id)scalesNeededForArtboard:(id)arg1 clients:(id)arg2;
+ (void)initialize;

@end

