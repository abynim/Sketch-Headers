#import "NSObject.h"

@interface MSSliceTrimming : NSObject
{
}

+ (struct CGRect)simpleSafeRectForSlice:(id)arg1;
+ (struct CGRect)safeRectForSlice:(id)arg1;
+ (id)basicSliceFromLayer:(id)arg1;
+ (struct CGRect)_trimmedRectForSlice:(id)arg1;
+ (struct CGRect)rect:(struct CGRect)arg1 forLayer:(id)arg2 adjustedForPage:(id)arg3;
+ (struct CGRect)trimmedRectForSlice:(id)arg1;
+ (void)trimSlice:(id)arg1 toFitLayers:(id)arg2;

@end

