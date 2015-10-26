#import "NSObject.h"

@class NSArray, NSNotification, NSString, NSToolbar, NSToolbarItem;

@protocol NSToolbarDelegate <NSObject>

@optional
- (void)toolbarDidRemoveItem:(NSNotification *)arg1;
- (void)toolbarWillAddItem:(NSNotification *)arg1;
- (NSArray *)toolbarSelectableItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarAllowedItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarDefaultItemIdentifiers:(NSToolbar *)arg1;
- (NSToolbarItem *)toolbar:(NSToolbar *)arg1 itemForItemIdentifier:(NSString *)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
@end

