#import "NSFileManager.h"

@interface NSFileManager (ZKAdditions)
- (unsigned int)zk_crcForPath:(id)arg1 invoker:(id)arg2 throttleThreadSleepTime:(double)arg3;
- (unsigned int)zk_crcForPath:(id)arg1 invoker:(id)arg2;
- (unsigned int)zk_crcForPath:(id)arg1;
- (unsigned int)zk_externalFileAttributesFor:(id)arg1;
- (unsigned int)zk_externalFileAttributesAtPath:(id)arg1;
- (unsigned int)zk_posixPermissionsAtPath:(id)arg1;
- (id)zk_modificationDateForPath:(id)arg1;
- (void)zk_combineAppleDoubleInDirectory:(id)arg1;
- (id)zkTotalSizeAndItemCountAtPath:(id)arg1 usingResourceFork:(BOOL)arg2;
- (void)totalsAtDirectoryFSRef:(struct FSRef *)arg1 usingResourceFork:(BOOL)arg2 totalSize:(unsigned long long *)arg3 itemCount:(unsigned long long *)arg4;
- (unsigned long long)zk_dataSizeAtFilePath:(id)arg1;
- (BOOL)zk_isDirAtPath:(id)arg1;
- (BOOL)zk_isSymLinkAtPath:(id)arg1;
@end

