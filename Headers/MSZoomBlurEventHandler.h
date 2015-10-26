#import "MSPointsEventHandler.h"

@class MSStyleBlur;

@interface MSZoomBlurEventHandler : MSPointsEventHandler
{
    MSStyleBlur *_blurStyle;
}

@property(retain, nonatomic) MSStyleBlur *blurStyle; // @synthesize blurStyle=_blurStyle;
- (void).cxx_destruct;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)currentGroup;
- (id)points;

@end

