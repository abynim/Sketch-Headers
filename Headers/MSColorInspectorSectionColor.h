#import "MSColorInspectorSection.h"

@class MSColor, MSColorFactory;

@interface MSColorInspectorSectionColor : MSColorInspectorSection
{
    MSColor *_pickedColor;
    MSColorFactory *_factory;
}

@property(retain, nonatomic) MSColorFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) MSColor *pickedColor; // @synthesize pickedColor=_pickedColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(id)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pickerViewSupportsDrop:(id)arg1;
- (BOOL)pickerViewSupportsDrag:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(id)arg1 acceptDrop:(id)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (id)tooltipForPresetButtonAtIndex:(unsigned long long)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (BOOL)hasAdvancedSettingsNib;
- (long long)fillType;
- (void)validate;
- (void)setStyleParts:(id)arg1;
- (void)highlightCurrentColor;
- (void)reloadPresetPicker;
- (id)viewsWithColorPickerView:(id)arg1;
- (id)init;

@end

