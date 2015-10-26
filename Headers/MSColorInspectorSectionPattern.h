#import "MSColorInspectorSection.h"

@class NSButton, NSImageView, NSPopUpButton;

@interface MSColorInspectorSectionPattern : MSColorInspectorSection
{
    NSImageView *patternWell;
    NSButton *choosePatternButton;
    NSPopUpButton *patternTilButton;
}

- (void).cxx_destruct;
- (void)updatePatternWellImage;
- (id)factory;
- (BOOL)pickerViewSupportsDrop:(id)arg1;
- (BOOL)pickerViewSupportsDrag:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)patternWellAction:(id)arg1;
- (void)choosePatternImage:(id)arg1;
- (void)validate;
- (long long)fillType;
- (void)enableSectionButtonAction:(id)arg1;
- (id)viewsWithColorPickerView:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

