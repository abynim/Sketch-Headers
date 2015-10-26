#import "NSObject.h"

@protocol GKRect <NSObject>
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double maxY;
@property(nonatomic) double maxX;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double y;
@property(nonatomic) double x;
@property(nonatomic) struct CGRect rect;
@end

