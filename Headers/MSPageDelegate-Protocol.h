#import "NSObject.h"

@class MSArtboardGroup, MSPage;

@protocol MSPageDelegate <NSObject>
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)didUpdateDetailsForPage:(MSPage *)arg1;
- (void)willRemovePage:(MSPage *)arg1;
- (void)didAddPage:(MSPage *)arg1;
- (void)willRemoveArtboard:(MSArtboardGroup *)arg1 fromPage:(MSPage *)arg2;
- (void)didAddArtboard:(MSArtboardGroup *)arg1 toPage:(MSPage *)arg2;
- (void)didUpdateDetailsForArtboard:(MSArtboardGroup *)arg1;
- (void)determineCurrentArtboard;
- (void)layerSelectionDidChange;
- (void)currentArtboardDidChange;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(MSPage *)arg2;
@end

