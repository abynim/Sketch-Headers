#import "MSSnapperRect.h"

@class MSLayer;

@interface MSRotatedSnapperRect : MSSnapperRect
{
    MSLayer *_layer;
}

@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (struct CGRect)rect;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setY:(double)arg1;
- (double)y;
- (void)setX:(double)arg1;
- (double)x;

@end

