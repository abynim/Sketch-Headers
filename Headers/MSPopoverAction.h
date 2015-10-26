#import "MSBaseAction.h"

#import "BCPopoverDelegate.h"

@class BCPopover, NSString;

@interface MSPopoverAction : MSBaseAction <BCPopoverDelegate>
{
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (BOOL)showInToolbar;
- (id)menu;
- (BOOL)hasSubMenu;
- (id)viewForAttachingPopover:(id)arg1;
- (void)closePopover;
- (void)popoverWillClose:(id)arg1;
- (void)showPopoverToForSender:(id)arg1 viewController:(id)arg2;
- (id)popoverViewController;
- (void)showPopover:(id)arg1;
- (void)doPerformAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

