#import "MSBaseAction.h"

@interface MSCanvasActions : MSBaseAction
{
}

- (void)makeKeyWindow;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)centerLayersInCanvas:(id)arg1;
- (void)actualSize:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)zoomToSelection:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)pasteHere:(id)arg1;
- (void)pasteOverSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;

@end

