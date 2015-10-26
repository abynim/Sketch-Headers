#import "NSObject.h"

@protocol MSBaseViewDelegate <NSObject>
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
@end

