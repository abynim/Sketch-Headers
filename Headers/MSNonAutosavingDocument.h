#import "MSDocument.h"

@interface MSNonAutosavingDocument : MSDocument
{
}

+ (BOOL)autosavesInPlace;
- (id)fileType;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

