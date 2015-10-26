#import "NSWindowController.h"

@class NSTextField, NSView;

@interface BCTrialExpiredWindowController : NSWindowController
{
    NSView *registrationView;
    NSTextField *registrationField;
    NSTextField *mainTextField;
}

+ (void)show;
- (void).cxx_destruct;
- (void)registerLicense:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)didCloseAllDocuments:(id)arg1;
- (void)quit:(id)arg1;

@end

