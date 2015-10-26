#import "NSDocument.h"

@interface MSScriptDocument : NSDocument
{
}

- (BOOL)showBundleAlreadyInstalledAlert:(id)arg1 existingPlugin:(id)arg2;
- (BOOL)showBundleUpgradeAlert:(id)arg1 existingPlugin:(id)arg2;
- (id)titleFromPlugin:(id)arg1;
- (void)copyPluginBundle:(id)arg1 toPluginsFolderURL:(id)arg2;
- (void)removeExistingPlugin:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

