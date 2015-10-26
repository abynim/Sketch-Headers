#import "ECDebugMenu.h"

@class ECLogManager;

@interface ECLoggingMenu : ECDebugMenu
{
    ECLogManager *mLogManager;
}

- (void).cxx_destruct;
- (void)revealSettings;
- (void)revealLogFiles;
- (id)logFolder;
- (BOOL)validateMenuItem:(id)arg1;
- (void)channelsChanged:(id)arg1;
- (void)defaultHandlerSelected:(id)arg1;
- (void)resetSelected:(id)arg1;
- (void)handlerSelected:(id)arg1;
- (void)channelSelected:(id)arg1;
- (void)contextMenuSelected:(id)arg1;
- (void)channelMenuSelected:(id)arg1;
- (void)buildMenu;
- (id)buildDefaultHandlersMenu;
- (id)buildMenuForChannel:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (void)awakeFromNib;

@end

