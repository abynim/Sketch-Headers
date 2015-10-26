#import "ECDebugMenu.h"

@class NSDictionary;

@interface ECOptionsMenu : ECDebugMenu
{
    NSDictionary *_options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)optionSelected:(id)arg1;
- (void)buildMenuWithOptions:(id)arg1;
- (void)buildMenu;
- (void)setupAsRootMenu;
- (void)dealloc;
- (void)awakeFromNib;

@end

