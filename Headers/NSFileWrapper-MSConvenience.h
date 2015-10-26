#import "NSFileWrapper.h"

@interface NSFileWrapper (MSConvenience)
+ (id)fileWrapperFromData:(id)arg1;
+ (id)fileWrapperFromObject:(id)arg1;
+ (id)directoryFileWrapperFromDictionary:(id)arg1;
- (id)dictionaryContentsOfFileWithName:(id)arg1;
- (id)stringContentsOfFileWithName:(id)arg1;
@end

