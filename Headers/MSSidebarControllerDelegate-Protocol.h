#import "NSObject.h"

@class MSDocumentData, MSLayer, MSPage, MSSidebarListController, NSArray;

@protocol MSSidebarControllerDelegate <NSObject>
@property(readonly, nonatomic) MSDocumentData *documentData;
- (void)sidebarController:(MSSidebarListController *)arg1 hoveredLayerDidChangeTo:(MSLayer *)arg2;
- (NSArray *)sidebarController:(MSSidebarListController *)arg1 exportLayers:(NSArray *)arg2;
- (NSArray *)sidebarControllerContextMenuItemsForCurrentSelection:(MSSidebarListController *)arg1;
- (void)sidebarController:(MSSidebarListController *)arg1 validateRemovalOfPage:(MSPage *)arg2 withRemovalBlock:(void (^)(void))arg3;
- (void)sidebarControllerSelectionDidChange:(MSSidebarListController *)arg1;
- (void)sidebarControllerDidUpdate:(MSSidebarListController *)arg1;
@end

