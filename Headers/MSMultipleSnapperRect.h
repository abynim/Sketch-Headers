#import "MSSnapperRect.h"

@class NSArray;

@interface MSMultipleSnapperRect : MSSnapperRect
{
    NSArray *_layers;
    NSArray *_relativeRects;
    struct CGRect _unionRect;
}

+ (id)rectForLayers:(id)arg1;
@property(nonatomic) struct CGRect unionRect; // @synthesize unionRect=_unionRect;
@property(retain, nonatomic) NSArray *relativeRects; // @synthesize relativeRects=_relativeRects;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (struct CGRect)rect;
- (void)setRect:(struct CGRect)arg1;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setY:(double)arg1;
- (double)y;
- (void)setX:(double)arg1;
- (double)x;

@end

