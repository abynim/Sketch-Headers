#import "NSObject.h"

@interface MSPluginsMenuBuilder : NSObject
{
}

+ (id)rawShortcutStringForPluginAtURL:(id)arg1;
+ (unsigned long long)shortcutModifiersForPluginAtURL:(id)arg1;
+ (id)shortcutForPluginAtURL:(id)arg1;
+ (id)menuItemForSubDirectoryAtURL:(id)arg1 selector:(SEL)arg2;
+ (id)menuItemForPluginAtURL:(id)arg1 selector:(SEL)arg2;
+ (BOOL)URLIsScript:(id)arg1;
+ (BOOL)URLIsFolder:(id)arg1;
+ (id)sortedSubpathsOfDirectoryAtURL:(id)arg1;
+ (id)pluginMenuForDirectoryAtURL:(id)arg1 selector:(SEL)arg2;
+ (void)addRevealSubmenuToMenu:(id)arg1 pluginsURL:(id)arg2;
+ (void)addEditSubmenuToMenu:(id)arg1 pluginsURL:(id)arg2;
+ (void)attachPluginMenuToItem:(id)arg1;

@end

