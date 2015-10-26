#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSSegmentedControl, NSTextField, NSTextView;

@interface JRFeedbackController : NSWindowController
{
    NSTextView *textView;
    NSButton *includeHardwareDetailsCheckbox;
    NSTextField *nameTextField;
    NSTextField *emailAddressComboBox;
    NSProgressIndicator *progress;
    NSSegmentedControl *segmentedControl;
    NSButton *cancelButton;
    NSButton *sendButton;
    int currentSection;
    BOOL includeContactInfo;
}

+ (id)postURL;
+ (void)showFeedbackWithBugDetails:(id)arg1;
+ (void)showFeedback;
- (void).cxx_destruct;
- (void)showWindow:(id)arg1;
- (void)setTextViewStringTo:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAlertMessage:(id)arg1 withInformativeText:(id)arg2 andAlertStyle:(unsigned long long)arg3;
- (void)alertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)closeFeedback;
- (void)postFeedback:(id)arg1;
- (void)system_profilerThread:(id)arg1;
- (void)submitAction:(id)arg1;
- (void)switchSectionAction:(id)arg1;
- (void)visitOnlineSupport:(id)arg1;
- (void)setIncludeContactInfo:(BOOL)arg1;
- (BOOL)includeContactInfo;
- (void)windowDidLoad;
- (id)init;

@end

