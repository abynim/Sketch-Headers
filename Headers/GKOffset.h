#import "NSObject.h"

#import "NSCopying.h"

@interface GKOffset : NSObject <NSCopying>
{
    struct CGSize _offset;
    struct CGPoint _point;
}

+ (id)offsetFromPoint:(id)arg1 toPoint:(id)arg2;
+ (id)offsetWithPoint:(struct CGPoint)arg1;
+ (id)offsetWithSize:(struct CGSize)arg1;
+ (id)offsetWithValue:(double)arg1;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
- (id)description;
- (BOOL)isSmallerThanOffset:(id)arg1;
@property(nonatomic) double yOffset;
@property(nonatomic) double xOffset;
- (id)invert;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

