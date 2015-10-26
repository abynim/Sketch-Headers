#import "MSPopoverAction.h"

#import "NSMenuDelegate.h"

@class BCPopover, NSString;

@interface MSIOSConnectAction : MSPopoverAction <NSMenuDelegate>
{
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (id)popoverViewController;
- (void)iOSConnectAction:(id)arg1;
- (id)connectionController;
- (BOOL)validate;
- (BOOL)validateToolbarItem:(id)arg1;
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

