#import "NSCoding.h"

@protocol NSSecureCoding <NSCoding>
+ (BOOL)supportsSecureCoding;
@end

