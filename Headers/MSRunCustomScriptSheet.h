#import "CHSheetController.h"

@class NSButton, NSPopUpButton, NSTextField, NSTextView;

@interface MSRunCustomScriptSheet : CHSheetController
{
    NSTextView *inputField;
    NSButton *saveButton;
    NSTextField *scriptNameField;
    NSButton *runButton;
    NSPopUpButton *actionButton;
    NSTextView *_logField;
}

@property(retain, nonatomic) NSTextView *logField; // @synthesize logField=_logField;
- (void).cxx_destruct;
- (void)saveAction:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)runScript:(id)arg1;
- (void)awakeFromNib;

@end

