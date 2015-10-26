#import "NSObject.h"

@protocol MSTextLayerEditingDelegate <NSObject>
- (void)adjustForegroundColor;
- (void)adjustTextViewFrame;
@end

