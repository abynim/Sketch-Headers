#import "NSObject.h"

@interface MSViewPort : NSObject
{
    double _zoomValue;
    struct CGPoint _scrollOrigin;
}

+ (double)cappedZoom:(double)arg1;
+ (id)viewPortWithScrollOrigin:(struct CGPoint)arg1 zoom:(double)arg2;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

