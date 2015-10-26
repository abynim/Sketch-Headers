#import "MSMultipleStylePartInspectorViewController.h"

#import "BCPopoverDelegate.h"

@class BCPopover, MSBorderOptionsInspectorViewController, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleBorderInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
    MSTextLabelForUpDownField *_thicknessLabel;
    NSButton *_addStylePartButton;
    NSButton *_advancedOptionsButton;
    MSBorderOptionsInspectorViewController *_borderOptionsController;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSBorderOptionsInspectorViewController *borderOptionsController; // @synthesize borderOptionsController=_borderOptionsController;
@property(retain, nonatomic) NSButton *advancedOptionsButton; // @synthesize advancedOptionsButton=_advancedOptionsButton;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *thicknessLabel; // @synthesize thicknessLabel=_thicknessLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadInspectorStack:(id)arg1;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)shouldShowAdvancedOptionsButton;
- (BOOL)shouldHideAddStylePartButton;
- (void)setLayers:(id)arg1;
- (void)styleDidEnableOrDisable;
- (void)popoverWillClose:(id)arg1;
- (void)showAdvancedOptionsAction:(id)arg1;
- (void)prepare;
- (unsigned long long)stylePartType;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

