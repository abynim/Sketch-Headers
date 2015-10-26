#import "MSColorInspectorSection.h"

@class NSButton, NSImageView, NSPopUpButton;

@interface MSColorInspectorSectionPattern : MSColorInspectorSection
{
    NSImageView *patternWell;
    NSButton *choosePatternButton;
    NSPopUpButton *patternTilButton;
}

- (void).cxx_destruct;
- (unsigned long long)assetType;
- (void)updatePatternWellImage;
- (BOOL)pickerView:(id)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(id)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)patternWellAction:(id)arg1;
- (void)choosePatternImage:(id)arg1;
- (void)validate;
- (long long)fillType;
- (void)enableSectionButtonAction:(id)arg1;
- (id)assetPickerViewKeys;
- (id)viewsWithColorPickerView:(id)arg1 blendingView:(id)arg2;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;

@end

