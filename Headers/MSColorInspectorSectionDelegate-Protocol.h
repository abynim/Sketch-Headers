#import "NSObject.h"

@class MSColor, MSColorInspectorSectionPattern;

@protocol MSColorInspectorSectionDelegate <NSObject>
- (void)inspectorSectionDidUpdate:(MSColorInspectorSectionPattern *)arg1;
- (void)colorDidChangeTo:(MSColor *)arg1;
@end

