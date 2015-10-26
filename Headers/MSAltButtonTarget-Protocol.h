#import "NSObject.h"

@class MSAltButton;

@protocol MSAltButtonTarget <NSObject>

@optional
- (BOOL)altButtonCanShowAltImage:(MSAltButton *)arg1;
@end

