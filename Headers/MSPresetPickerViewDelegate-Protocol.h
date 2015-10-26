#import "NSObject.h"

@class MSPresetPickerView, NSString;

@protocol MSPresetPickerViewDelegate <NSObject>
- (void)pickerView:(MSPresetPickerView *)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(MSPresetPickerView *)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(MSPresetPickerView *)arg1;
- (unsigned long long)numberOfPresetsInPickerView:(MSPresetPickerView *)arg1;

@optional
- (BOOL)pickerView:(MSPresetPickerView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (NSString *)tooltipForPresetButtonAtIndex:(unsigned long long)arg1;
- (void)pickerView:(MSPresetPickerView *)arg1 didStopHoverPresetAtIndex:(long long)arg2;
- (void)pickerView:(MSPresetPickerView *)arg1 didHoverPresetAtIndex:(long long)arg2;
- (void)presetPickerFinishedDragging:(MSPresetPickerView *)arg1;
- (BOOL)pickerViewSupportsInternalDragDrop:(MSPresetPickerView *)arg1;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(MSPresetPickerView *)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSPresetPickerView *)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSPresetPickerView *)arg1 shouldShowMenuForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerViewSupportsDrop:(MSPresetPickerView *)arg1;
- (BOOL)pickerViewSupportsDrag:(MSPresetPickerView *)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)shouldShowAddPresetButton:(MSPresetPickerView *)arg1;
- (void)drawFullContentForCellInPickerView:(MSPresetPickerView *)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawContentForCellInPickerView:(MSPresetPickerView *)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
@end

