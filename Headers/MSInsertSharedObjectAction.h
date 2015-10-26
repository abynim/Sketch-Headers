#import "MSBaseAction.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface MSInsertSharedObjectAction : MSBaseAction <NSMenuDelegate>
{
}

- (BOOL)hasSubMenu;
- (id)noSharedObjectsView;
- (void)showSharedObjectsSheet:(id)arg1;
- (void)insertSharedObjectInstance:(id)arg1;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 sharedObject:(id)arg3;
- (id)sharedObjectName;
- (id)unsortedSharedObjects;
- (id)firstSharedObjectForContents:(id)arg1;
- (void)populateMenu:(id)arg1 withDescriptors:(id)arg2;
- (void)updateMenuForSymbols:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

