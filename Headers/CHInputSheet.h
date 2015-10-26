#import "CHSheetController.h"

@class NSTextField;

@interface CHInputSheet : CHSheetController
{
    NSTextField *titleField;
    NSTextField *subtitleField;
    NSTextField *fieldTitleField;
    NSTextField *inputField;
}

- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setFieldTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;

@end

