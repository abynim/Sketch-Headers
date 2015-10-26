#import "NSObject.h"

@class MSContentDrawView, MSLayerArray, MSPage, NSArray;

@protocol MSBasicDelegate <NSObject>
- (MSLayerArray *)selectedLayersA;
- (NSArray *)selectedLayers;
- (MSPage *)currentPage;
- (MSContentDrawView *)currentView;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
@end

