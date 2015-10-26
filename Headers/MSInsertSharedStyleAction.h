#import "MSInsertSharedObjectAction.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface MSInsertSharedStyleAction : MSInsertSharedObjectAction <NSMenuDelegate>
{
}

- (id)label;
- (id)sharedObjectName;
- (id)imageName;
- (id)unsortedSharedObjects;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 sharedObject:(id)arg3;
- (void)insertSharedObjectInstance:(id)arg1;
- (void)showSharedObjectsSheet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

