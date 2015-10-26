#import "CABasicAnimation.h"

@interface MSBlockAnimation : CABasicAnimation
{
    BOOL executed;
    CDUnknownBlockType block;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

