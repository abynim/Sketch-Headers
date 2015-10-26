#import "NSObject.h"

@class MSColor, MSColorInspector;

@protocol MSColorInspectorDelegate <NSObject>
- (void)colorInspector:(MSColorInspector *)arg1 didChangeToColor:(MSColor *)arg2;

@optional
- (void)colorInspectorWillClose:(MSColorInspector *)arg1;
- (void)colorInspectorDidChange:(MSColorInspector *)arg1;
- (void)inspectorDidChangeType:(MSColorInspector *)arg1;
@end

