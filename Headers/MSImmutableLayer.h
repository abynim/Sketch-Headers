#import "_MSImmutableLayer.h"

@class NSAffineTransform;

@interface MSImmutableLayer : _MSImmutableLayer
{
    NSAffineTransform *_transform;
    struct CGRect _drawableFrame;
}

@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect drawableFrame; // @synthesize drawableFrame=_drawableFrame;
- (void).cxx_destruct;
- (id)initWithMutableModelObject:(id)arg1;

@end

