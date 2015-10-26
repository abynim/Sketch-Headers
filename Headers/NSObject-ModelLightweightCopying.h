#import "NSObject.h"

@interface NSObject (ModelLightweightCopying)
- (id)copyLightweight;
@property(readonly, nonatomic) BOOL isLightweightCopy;
@end

