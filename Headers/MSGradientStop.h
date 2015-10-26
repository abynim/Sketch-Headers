#import "_MSGradientStop.h"

@interface MSGradientStop : _MSGradientStop
{
}

+ (id)stopWithPosition:(double)arg1 color:(id)arg2;
- (double)cappedBounds:(double)arg1;
- (void)setPosition:(double)arg1;
- (id)initWithPosition:(double)arg1 color:(id)arg2;

@end

