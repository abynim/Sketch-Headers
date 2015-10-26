#import "NSObject.h"

#import "NSCopying.h"

@interface GKObjectEnum : NSObject <NSCopying>
{
    long long type;
}

- (id)description;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;

@end

