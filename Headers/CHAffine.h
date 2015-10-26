#import "NSAffineTransform.h"

@interface CHAffine : NSAffineTransform
{
}

+ (id)affine;
- (id)scaleY:(double)arg1;
- (id)scaleX:(double)arg1;
- (id)scale:(double)arg1;
- (id)rotate:(double)arg1;
- (id)translateY:(double)arg1;
- (id)translateX:(double)arg1;
- (id)translate:(struct CGPoint)arg1;

@end

