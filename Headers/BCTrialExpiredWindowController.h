#import "NSWindowController.h"

@class NSTextField, NSView;

@interface BCTrialExpiredWindowController : NSWindowController
{
    NSView *normalView;
    NSView *registrationView;
    NSTextField *registrationField;
    NSTextField *subTextField;
    NSTextField *mainTextField;
}

+ (void)show;
- (void).cxx_destruct;
- (void)registerLicense:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)registerVolume:(id)arg1;
- (void)quit:(id)arg1;
- (void)buy:(id)arg1;
- (void)replaceApplicationNameInView:(id)arg1;
- (void)awakeFromNib;

@end

