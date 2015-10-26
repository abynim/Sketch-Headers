#import "NSObject.h"

@protocol MSInspectorChildController <NSObject>
- (BOOL)shouldHideExportBar;
- (void)prepareForDisplay;
@end

