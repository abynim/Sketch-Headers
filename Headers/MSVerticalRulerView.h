#import "MSRulerView.h"

@interface MSVerticalRulerView : MSRulerView
{
}

- (id)snapLineWithPosition:(double)arg1;
- (id)occupiedRegionForRect:(struct CGRect)arg1 withOffset:(long long)arg2 zoom:(double)arg3;
- (id)bezierPathForLineAtPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (void)refreshTemporaryRulerGuide;
- (void)refreshGuideInDrawViewAtPosition:(double)arg1;
- (void)setResizeCursor;
- (BOOL)isFlipped;
- (Class)rulerViewLayerClass;
- (void)awakeFromNib;

@end

