#import "NSBitmapImageRep.h"

@interface NSBitmapImageRep (CHBitmapRepAdditions)
+ (id)bitmapImageRepWithSize:(struct CGSize)arg1 flags:(unsigned long long)arg2 colorSpace:(id)arg3 drawingBlock:(CDUnknownBlockType)arg4;
- (id)bitSafeBitmapImageRep;
- (id)bitmapImageRepByFlippingVerticalFlags:(unsigned long long)arg1;
- (id)bitmapImageRepByCroppingToRect:(struct CGRect)arg1;
- (struct CGRect)bitSafeFastRectForTrimming;
- (struct CGRect)rectForTrimming;
- (id)PNGRepresentationWithInterlaced:(BOOL)arg1;
- (id)JPGRepresentationWithCompression:(double)arg1 progressive:(BOOL)arg2;
@end

