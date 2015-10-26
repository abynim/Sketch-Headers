#import "NSObject.h"

@interface MSPerspectiveInstructions : NSObject
{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
    struct CGRect _rect;
}

@property(nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)applyToImage:(id)arg1;

@end

