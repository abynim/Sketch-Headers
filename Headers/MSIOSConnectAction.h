#import "MSBaseAction.h"

#import "BCPopoverDelegate.h"
#import "NSMenuDelegate.h"

@class BCPopover, NSString;

@interface MSIOSConnectAction : MSBaseAction <NSMenuDelegate, BCPopoverDelegate>
{
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)showPopoverToView:(id)arg1 viewController:(id)arg2;
- (void)closePopover;
- (void)showClientsWindowRelativeToView:(id)arg1;
- (id)menu;
- (BOOL)showInToolbar;
- (void)doPerformAction:(id)arg1;
- (void)iOSConnectAction:(id)arg1;
- (id)connectionController;
- (BOOL)validate;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)hasSubMenu;
- (id)imageName;
- (id)label;
- (id)tooltip;
- (void)clientsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

