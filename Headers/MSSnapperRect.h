#import "NSObject.h"

@class MSLayer;

@interface MSSnapperRect : NSObject
{
    MSLayer *_layer;
}

+ (id)rectForLayer:(id)arg1;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)setSize:(double)arg1 forAxis:(id)arg2;
- (void)setMax:(double)arg1 forAxis:(id)arg2;
- (void)setMid:(double)arg1 forAxis:(id)arg2;
- (void)setMin:(double)arg1 forAxis:(id)arg2;
- (double)sizeForAxis:(id)arg1;
- (double)maxForAxis:(id)arg1;
- (double)midForAxis:(id)arg1;
- (double)minForAxis:(id)arg1;
@property(readonly, nonatomic) struct CGRect rect;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double maxY;
@property(nonatomic) double maxX;
@property(nonatomic) double y;
@property(nonatomic) double x;
- (id)frame;

@end

