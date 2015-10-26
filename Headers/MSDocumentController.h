#import "NSDocumentController.h"

@interface MSDocumentController : NSDocumentController
{
}

- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)noteNewRecentDocument:(id)arg1;
- (BOOL)shoudNoteRecentDocumentForType:(id)arg1;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;

@end

