#import "NSFileManager.h"

@interface NSFileManager (CHFileManagerExtensions)
- (id)uniqueURLInFolder:(id)arg1 withBase:(id)arg2 extension:(id)arg3;
- (id)uniqueTemporaryURLWithBase:(id)arg1 extension:(id)arg2 subfolder:(id)arg3;
- (id)uniqueTemporaryURLWithExtension:(id)arg1 subfolder:(id)arg2;
- (id)uniqueTemporaryURLWithExtension:(id)arg1;
- (BOOL)fileIsFolder:(id)arg1;
- (id)shallowSubpathURLsOfDirectoryAtURL:(id)arg1;
- (id)shallowSubpathsOfDirectoryAtURL:(id)arg1;
- (id)visibleSubpathsOfDirectoryWithoutGoingIntoPackages:(id)arg1;
- (id)visibleSubpathsOfDirectoryAtURLWithoutGoingIntoPackages:(id)arg1;
- (BOOL)createDirectoryIfNecessary:(id)arg1;
- (id)visibleSubpathsOfDirectory:(id)arg1;
@end

