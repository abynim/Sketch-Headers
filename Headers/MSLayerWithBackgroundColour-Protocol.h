#import "NSObject.h"

@class MSColor;

@protocol MSLayerWithBackgroundColour <NSObject>
@property(nonatomic) BOOL hasBackgroundColor;
- (MSColor *)backgroundColor;
@end

