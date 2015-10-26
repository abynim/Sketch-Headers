#import "NSObject.h"

@interface MSPastingViewport : NSObject
{
    double _zoomValue;
    struct CGRect _visibleRect;
}

+ (id)viewportWithVisibleRect:(struct CGRect)arg1 zoom:(double)arg2;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (id)viewportContainingLayers:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

