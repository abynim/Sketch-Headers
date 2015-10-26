#import "NSObject.h"

@class MSContentDrawView, MSPage, NSArray;

@protocol MSBasicDelegate <NSObject>
- (void)reloadLayerList;
- (NSArray *)selectedLayers;
- (MSPage *)currentPage;
- (MSContentDrawView *)currentView;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
@end

