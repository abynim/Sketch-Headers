#import "NSObject.h"

@class BCTableCellView;

@protocol BCTableCellViewDelegate <NSObject>
- (void)tableCellViewDidBeginEditing:(BCTableCellView *)arg1;
- (void)tableCellViewMouseExited:(BCTableCellView *)arg1;
- (void)tableCellViewMouseEntered:(BCTableCellView *)arg1;
- (void)tableCellViewHandleBadgePressed:(BCTableCellView *)arg1;
- (BOOL)isTableCellViewNodeSelected:(BCTableCellView *)arg1;
@end

