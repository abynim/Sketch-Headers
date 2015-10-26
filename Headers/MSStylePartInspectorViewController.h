#import "CHViewController.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSSectionProtocol.h"
#import "NSPopoverDelegate.h"
#import "NSWindowDelegate.h"

@class BCPopover, MSColorPreviewButton, NSArray, NSArrayController, NSString, NSView;

@interface MSStylePartInspectorViewController : CHViewController <NSPopoverDelegate, MSSectionProtocol, NSWindowDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
    NSView *nameView;
    NSArray *_styleParts;
    NSArrayController *_arrayController;
    id <MSStylePartInspectorDelegate> _delegate;
    MSColorPreviewButton *_colorPickerButton;
    BCPopover *_popover;
}

+ (id)reusableControllerArray;
+ (id)stylePartViewController;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSColorPreviewButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)reloadInspectorStack:(id)arg1;
- (id)views;
- (void)didGetAddedToInspector;
- (BOOL)hasEnabledStyle;
- (void)prepare;
- (void)dealloc;
- (void)colorInspectorDidChange:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)fitScrollViewToParent;
- (void)popoverWillClose:(id)arg1;
- (void)checkBoxAction:(id)arg1;
- (void)moveInspectorToFitColorPopoverIfNecessary:(id)arg1;
- (void)popoverWindowSizeDidChange:(id)arg1;
- (void)previewCellAction:(id)arg1;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

