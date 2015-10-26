#import "CHViewController.h"

#import "MSPresetPickerViewDelegate.h"

@class MSEventHandlerManager, MSPresetPickerView, NSArray, NSScrollView, NSString;

@interface MSColorInspectorSection : CHViewController <MSPresetPickerViewDelegate>
{
    id <MSColorInspectorSectionDelegate> _delegate;
    NSArray *_styleParts;
    MSPresetPickerView *_presetPicker;
    NSScrollView *_presetPickerScrollView;
    MSEventHandlerManager *_handlerManager;
}

@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(retain, nonatomic) NSScrollView *presetPickerScrollView; // @synthesize presetPickerScrollView=_presetPickerScrollView;
@property(retain, nonatomic) MSPresetPickerView *presetPicker; // @synthesize presetPicker=_presetPicker;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
@property(nonatomic) __weak id <MSColorInspectorSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldShowAddPresetButton:(id)arg1;
- (id)viewsWithColorPickerView:(id)arg1;
- (id)factory;
- (void)refreshAction:(id)arg1;
- (void)dealloc;
- (BOOL)pickerView:(id)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (unsigned long long)numberOfPresetsInPickerView:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)popoverWillClose;
- (void)validate;
- (BOOL)isEnabled;
- (long long)fillType;
- (void)reloadPresetPicker;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

