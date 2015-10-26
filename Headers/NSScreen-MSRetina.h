#import "NSScreen.h"

@interface NSScreen (MSRetina)
+ (double)currentContentsScale;
+ (BOOL)isOnRetinaScreen;
- (double)currentContentsScale;
- (BOOL)isOnRetinaScreen;
@end

