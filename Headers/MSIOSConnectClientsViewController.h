#import "NSViewController.h"

#import "BCPopoverContentController.h"
#import "NSSharingServicePickerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class MSIOSConnectionController, NSButton, NSString, NSTableView, NSTextField, NSView;

@interface MSIOSConnectClientsViewController : NSViewController <BCPopoverContentController, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, NSSharingServicePickerDelegate>
{
    NSTextField *_ipTextField;
    NSButton *_ipConnectButton;
    NSTextField *_titleTextField;
    NSTextField *_subTitleTextField;
    NSButton *_shareButton;
    NSView *_ipFieldBorderView;
    MSIOSConnectionController *_connectionController;
    NSTableView *_tableView;
}

@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(retain, nonatomic) NSView *ipFieldBorderView; // @synthesize ipFieldBorderView=_ipFieldBorderView;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSTextField *subTitleTextField; // @synthesize subTitleTextField=_subTitleTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSButton *ipConnectButton; // @synthesize ipConnectButton=_ipConnectButton;
@property(retain, nonatomic) NSTextField *ipTextField; // @synthesize ipTextField=_ipTextField;
- (void).cxx_destruct;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)selectionChanged:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openMirrorWebsite:(id)arg1;
- (BOOL)isValidIP:(id)arg1;
- (void)connectToIP:(id)arg1;
- (void)clientsChangedNotification:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithConnectionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

