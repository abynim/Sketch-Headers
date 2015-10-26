#import "NSControl.h"

#import "MSPresetPickerViewDelegate.h"

@class MSPresetPickerView, NSArray, NSString;

@interface BCColorListView : NSControl <MSPresetPickerViewDelegate>
{
    NSArray *_colors;
    long long _selectedColorIndex;
    id _bc_target;
    SEL _bc_action;
    MSPresetPickerView *_presetPicker;
}

@property(retain, nonatomic) MSPresetPickerView *presetPicker; // @synthesize presetPicker=_presetPicker;
@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
@property(readonly, nonatomic) long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerViewSupportsInternalDragDrop:(id)arg1;
- (BOOL)pickerViewSupportsDrop:(id)arg1;
- (BOOL)pickerViewSupportsDrag:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)shouldShowAddPresetButton:(id)arg1;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (id)tooltipForPresetButtonAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPresetsInPickerView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

