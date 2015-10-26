#import "MSMultipleStylePartInspectorViewController.h"

#import "BCPopoverDelegate.h"

@class BCPopover, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleFillInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
    MSTextLabelForUpDownField *_opacityLabel;
    NSButton *_addStylePartButton;
    NSButton *_advancedOptionsButton;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSButton *advancedOptionsButton; // @synthesize advancedOptionsButton=_advancedOptionsButton;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
- (void).cxx_destruct;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (unsigned long long)stylePartType;
- (void)popoverWillClose:(id)arg1;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)viewControllerWillDisappear;
- (BOOL)shouldHideAddStylePartButton;
- (void)prepare;
- (void)showAdvancedOptionsAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

