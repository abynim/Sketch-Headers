#import "MSStylePartInspectorViewController.h"

#import "BCPopoverContentController.h"

@class NSArray, NSPopUpButton, NSSegmentedControl, NSString, NSTextField;

@interface MSBorderOptionsInspectorViewController : MSStylePartInspectorViewController <BCPopoverContentController>
{
    NSPopUpButton *startDecorationButton;
    NSPopUpButton *endDecorationButton;
    NSTextField *dashField1;
    NSTextField *dashField2;
    NSTextField *dashField3;
    NSTextField *dashField4;
    NSArray *_layers;
    NSSegmentedControl *_capSegmentedControl;
    NSSegmentedControl *_joinSegmentedControl;
}

@property(retain, nonatomic) NSSegmentedControl *joinSegmentedControl; // @synthesize joinSegmentedControl=_joinSegmentedControl;
@property(retain, nonatomic) NSSegmentedControl *capSegmentedControl; // @synthesize capSegmentedControl=_capSegmentedControl;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)decorationForArrowType:(unsigned long long)arg1;
- (void)fillDashPlaceholderFields;
- (void)fillDashFields;
- (void)dashPatternAction:(id)arg1;
- (void)joinAction:(id)arg1;
- (void)capAction:(id)arg1;
- (void)evaluateCapJoinButtons;
- (void)prepareDecorationButtons;
- (void)endDecorationAction:(id)arg1;
- (void)startDecorationAction:(id)arg1;
- (void)flipDecoration:(id)arg1;
- (void)removeDecorationForLayer:(id)arg1 atPosition:(long long)arg2;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

