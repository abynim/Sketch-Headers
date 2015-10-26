#import "MSBaseAction.h"

#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"

@class NSPopover, NSString;

@interface MSIOSConnectAction : MSBaseAction <NSMenuDelegate, NSPopoverDelegate>
{
    NSPopover *_popover;
}

@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)dealloc;
- (void)popoverDidClose:(id)arg1;
- (void)showPopoverToButton:(id)arg1 viewController:(id)arg2;
- (void)closePopover;
- (void)showNoClientsEverConnectedWindow:(id)arg1;
- (void)showNoClientsWindow:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

