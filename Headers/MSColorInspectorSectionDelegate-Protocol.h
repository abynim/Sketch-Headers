#import "NSObject.h"

@class MSAssetCollection, MSColor, MSColorInspectorSectionPattern, MSEventHandlerManager, MSPersistentAssetCollection;

@protocol MSColorInspectorSectionDelegate <NSObject>
- (void)stack;
- (MSEventHandlerManager *)eventHandler;
- (MSPersistentAssetCollection *)globalAssets;
- (MSAssetCollection *)documentAssets;
- (void)inspectorSectionDidUpdate:(MSColorInspectorSectionPattern *)arg1;
- (void)colorDidChangeTo:(MSColor *)arg1;
@end

