#import "NSCopying.h"
#import "NSObject.h"

@protocol MSAsset <NSObject, NSCopying>
- (unsigned long long)assetType;
@end

