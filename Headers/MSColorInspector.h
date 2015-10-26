#import "NSViewController.h"

#import "BCPopoverContentController.h"
#import "MSColorInspectorSectionDelegate.h"
#import "MSModeModePickerDelegate.h"

@class BCColorListView, BCHSBColorPicker, BCPopover, MSColorInspectorSectionColor, MSColorInspectorSectionGradient, MSColorInspectorSectionNoise, MSColorInspectorSectionPattern, MSEventHandlerManager, MSModePickerView, NSArray, NSString, NSView;

@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, MSModeModePickerDelegate, BCPopoverContentController>
{
    BCHSBColorPicker *colorPicker;
    NSView *emptyTopView;
    NSView *colorPickerView;
    BCColorListView *colorListView;
    NSView *shadowBlendingView;
    NSView *borderBlendingOpacityView;
    NSArray *_styleParts;
    id <MSColorInspectorDelegate> _delegate;
    BCPopover *_popover;
    MSModePickerView *_borderColorTypePicker;
    MSModePickerView *_fillColorTypePicker;
    MSColorInspectorSectionColor *_colorSection;
    MSColorInspectorSectionGradient *_gradientSection;
    MSColorInspectorSectionPattern *_patternSection;
    MSColorInspectorSectionNoise *_noiseSection;
    MSEventHandlerManager *_handlerManager;
}

@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(retain, nonatomic) MSColorInspectorSectionNoise *noiseSection; // @synthesize noiseSection=_noiseSection;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(nonatomic) __weak MSModePickerView *fillColorTypePicker; // @synthesize fillColorTypePicker=_fillColorTypePicker;
@property(nonatomic) __weak MSModePickerView *borderColorTypePicker; // @synthesize borderColorTypePicker=_borderColorTypePicker;
@property(nonatomic) __weak BCPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)setActionsToNil;
- (void)colorMagnifierAction:(id)arg1;
- (void)pickerViewChanged:(id)arg1;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (id)filteredStyleParts:(id)arg1;
- (void)close:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)colorPickerAction:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)popoverWillClose;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)viewControllers;
- (id)currentSection;
- (long long)initialColorTypePickerMode;
- (void)fixFirstResponder;
- (BOOL)shouldHideTopTabBar;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findCommonColors;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (void)applyBackgroundArrowColor;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;
- (id)currentModePicker;
- (void)inspectorSectionDidUpdate:(id)arg1;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)initWithSender:(id)arg1 handlerManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

