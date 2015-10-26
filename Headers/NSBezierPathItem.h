#import "NSObject.h"

@interface NSBezierPathItem : NSObject
{
    struct CGPoint points[3];
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)bezierPathStartingAtPoint:(struct CGPoint)arg1;
- (struct CGPoint *)points;
- (void)setPoints:(struct CGPoint *)arg1;

@end

