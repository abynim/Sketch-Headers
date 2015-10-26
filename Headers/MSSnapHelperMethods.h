#import "NSObject.h"

@interface MSSnapHelperMethods : NSObject
{
}

+ (void)_drawBarsForHeightOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawBarsForWidthOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)applyTransform:(struct CGAffineTransform)arg1 inRect:(struct CGRect)arg2;
+ (void)_drawLabelWithAmount:(long long)arg1 forHeightOfRect:(struct CGRect)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4;
+ (void)_drawLabelWithAmount:(long long)arg1 forWidthOfRect:(struct CGRect)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4;
+ (void)drawHeightOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4;
+ (void)drawWidthOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4;
+ (void)drawHeightOfFrameBesidesFrame:(struct CGRect)arg1 zoom:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (void)drawWidthOfFrameAboveFrame:(struct CGRect)arg1 zoom:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (void)drawWidthOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 zoom:(double)arg3;
+ (void)drawHeightOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 zoom:(double)arg3;
+ (void)drawHeightOfFrameBesidesFrame:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)drawWidthOfFrameAboveFrame:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)resetSnapColor;
+ (id)snapColor;

@end

