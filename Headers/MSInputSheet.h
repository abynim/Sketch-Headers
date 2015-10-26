#import "CHSheetController.h"

@class NSTextField;

@interface MSInputSheet : CHSheetController
{
    CDUnknownBlockType _inputCompletionBlock;
    NSTextField *_titleField;
    NSTextField *_subtitleField;
    NSTextField *_fieldTitleField;
    NSTextField *_inputField;
}

+ (id)runWithTitle:(id)arg1 subtitle:(id)arg2 fieldTitle:(id)arg3 defaultValue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSTextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) NSTextField *fieldTitleField; // @synthesize fieldTitleField=_fieldTitleField;
@property(retain, nonatomic) NSTextField *subtitleField; // @synthesize subtitleField=_subtitleField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(copy, nonatomic) CDUnknownBlockType inputCompletionBlock; // @synthesize inputCompletionBlock=_inputCompletionBlock;
- (void).cxx_destruct;
- (void)setDefaultValue:(id)arg1;
- (void)setFieldTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)confirm:(id)arg1;

@end

