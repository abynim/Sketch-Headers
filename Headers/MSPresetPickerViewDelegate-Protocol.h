#import "NSObject.h"

@class MSAssetPickerView, NSString;

@protocol MSPresetPickerViewDelegate <NSObject>
- (void)pickerView:(MSAssetPickerView *)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(MSAssetPickerView *)arg1;
- (unsigned long long)numberOfPresetsInPickerView:(MSAssetPickerView *)arg1;

@optional
- (NSString *)pickerView:(MSAssetPickerView *)arg1 tooltipForPresetButtonAtIndex:(unsigned long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 didStopHoverPresetAtIndex:(long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 didHoverPresetAtIndex:(long long)arg2;
- (void)presetPickerFinishedDragging:(MSAssetPickerView *)arg1;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 shouldShowMenuForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerViewSupportsDrop:(MSAssetPickerView *)arg1;
- (BOOL)pickerViewSupportsDrag:(MSAssetPickerView *)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)shouldShowAddPresetButton:(MSAssetPickerView *)arg1;
- (void)drawFullContentForCellInPickerView:(MSAssetPickerView *)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawContentForCellInPickerView:(MSAssetPickerView *)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
@end

