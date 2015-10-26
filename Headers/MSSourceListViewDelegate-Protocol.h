#import "NSObject.h"
#import "PXListViewDelegate.h"

@class MSSourceListView, NSEvent, NSIndexSet;

@protocol MSSourceListViewDelegate <NSObject, PXListViewDelegate>
- (NSIndexSet *)listView:(MSSourceListView *)arg1 actualSelectionIndexes:(NSIndexSet *)arg2;
- (id)listView:(MSSourceListView *)arg1 menuForEvent:(NSEvent *)arg2;
@end

