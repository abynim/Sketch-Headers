#import "NSObject.h"

@class MSSliceLayer;

@protocol MSSliceLayerWatcher <NSObject>
- (void)sliceLayerDidChange:(MSSliceLayer *)arg1;
@end

