#import "NSObject.h"

@class NSIndexSet, NSNotification, NSPasteboard, PXListView, PXListViewCell;

@protocol PXListViewDelegate <NSObject>
- (PXListViewCell *)listView:(PXListView *)arg1 cellForRow:(unsigned long long)arg2;
- (double)listView:(PXListView *)arg1 heightOfRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInListView:(PXListView *)arg1;

@optional
- (BOOL)listView:(PXListView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 row:(unsigned long long)arg3 dropHighlight:(unsigned long long)arg4;
- (unsigned long long)listView:(PXListView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedRow:(unsigned long long)arg3 proposedDropHighlight:(unsigned long long)arg4;
- (BOOL)listView:(PXListView *)arg1 writeRowsWithIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)listView:(PXListView *)arg1 rowDoubleClicked:(unsigned long long)arg2;
- (void)listViewSelectionDidChange:(NSNotification *)arg1;
@end

