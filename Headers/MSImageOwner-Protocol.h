#import "NSObject.h"

@class MSImageProxy, NSImage;

@protocol MSImageOwner <NSObject>
- (NSImage *)NSImage;
- (MSImageProxy *)image;
@end

