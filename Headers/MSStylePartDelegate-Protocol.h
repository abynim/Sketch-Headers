#import "NSObject.h"

@protocol MSStylePartDelegate <NSObject>
- (BOOL)supportsAdvancedBorderSettings;
- (BOOL)hasBitmapStylesEnabled;
@end

