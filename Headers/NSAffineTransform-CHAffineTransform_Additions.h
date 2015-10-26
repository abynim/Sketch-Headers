#import "NSAffineTransform.h"

@interface NSAffineTransform (CHAffineTransform_Additions)
+ (id)transformFromStruct:(struct _CHTransformStruct)arg1 aroundPoint:(struct CGPoint)arg2 inPlace:(BOOL)arg3;
+ (id)transformFromStruct:(struct _CHTransformStruct)arg1 aroundPoint:(struct CGPoint)arg2;
+ (id)rotationTransformWithDegrees:(double)arg1 aroundPoint:(struct CGPoint)arg2;
+ (id)transformWithOffset:(struct CGPoint)arg1;
+ (id)transformByScaling:(double)arg1;
+ (id)transformByTranslatingXBy:(double)arg1 yBy:(double)arg2;
- (struct CGAffineTransform)CGAffineTransform;
- (id)invertedTransform;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (void)rotateWithDegrees:(double)arg1 aroundPoint:(struct CGPoint)arg2;
- (void)translateByOffset:(struct CGPoint)arg1;
@end

