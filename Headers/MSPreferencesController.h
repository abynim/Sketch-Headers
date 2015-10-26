#import "NSWindowController.h"

@class NSButton;

@interface MSPreferencesController : NSWindowController
{
    NSButton *scaleDownForRetinaButton;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)adjustColorsAction:(id)arg1;
- (void)scaleDownForRetinaAction:(id)arg1;
- (void)awakeFromNib;

@end

