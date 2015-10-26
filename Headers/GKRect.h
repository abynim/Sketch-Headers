#import "NSObject.h"

#import "NSCopying.h"

@interface GKRect : NSObject <NSCopying>
{
    struct CGRect _rect;
}

+ (id)rectWithUnionOfGKRects:(id)arg1;
+ (struct CGRect)NSRectValueFromObject:(id)arg1;
+ (id)safeRectWithUnionOfRects:(id)arg1;
+ (id)rectWithUnionOfRects:(id)arg1;
+ (id)rectWithRect:(struct CGRect)arg1;
+ (long long)compareRect:(id)arg1 andRect:(id)arg2 forAxis:(id)arg3;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGSize size; // @dynamic size;
@property(nonatomic) struct CGPoint origin; // @dynamic origin;
- (void)scaleBy:(double)arg1;
- (void)normalise;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double height; // @dynamic height;
@property(nonatomic) double width; // @dynamic width;
@property(nonatomic) double y; // @dynamic y;
@property(nonatomic) double x; // @dynamic x;
- (BOOL)intersectsWithRect:(id)arg1;
- (void)unionWith:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)setSize:(double)arg1 forAxis:(id)arg2;
- (id)setMax:(double)arg1 forAxis:(id)arg2;
- (id)setMid:(double)arg1 forAxis:(id)arg2;
- (id)setMin:(double)arg1 forAxis:(id)arg2;
- (double)sizeForAxis:(id)arg1;
- (double)maxForAxis:(id)arg1;
- (double)midForAxis:(id)arg1;
- (double)minForAxis:(id)arg1;
- (id)unionWithRect:(id)arg1;
- (void)intersectWithRect:(id)arg1;
- (BOOL)intersectsRect:(id)arg1;
- (BOOL)isContainedInRect:(id)arg1;
- (BOOL)containsRect:(id)arg1;
- (id)distanceFromCornerToMid:(id)arg1;
- (id)snapToRects:(id)arg1 withMargin:(double)arg2;
- (id)closestCornerForPoint:(id)arg1 marginCallback:(CDUnknownBlockType)arg2;
- (id)closestCornerForPoint:(id)arg1 withMargin:(double)arg2 satisfyingMask:(unsigned long long)arg3;
- (id)closestCornerForPoint:(id)arg1 withMargin:(double)arg2;
- (id)resizeByPuttingCorner:(id)arg1 atPoint:(id)arg2;
- (id)moveCorner:(id)arg1 toPoint:(id)arg2;
- (id)pointsForCorners:(id)arg1;
- (id)pointForCorner:(id)arg1;
- (double)valueForEdge:(id)arg1;
- (void)resizeMaxYTo:(double)arg1;
- (void)resizeMinYTo:(double)arg1;
- (void)resizeMaxXTo:(double)arg1;
- (void)resizeMinXTo:(double)arg1;
@property(nonatomic) struct CGPoint mid; // @dynamic mid;
@property double maxY; // @dynamic maxY;
@property(nonatomic) double midY; // @dynamic midY;
@property double minY; // @dynamic minY;
@property double maxX; // @dynamic maxX;
@property(nonatomic) double midX; // @dynamic midX;
@property double minX; // @dynamic minX;
- (id)moveBy:(struct CGSize)arg1;
- (id)insetXBy:(double)arg1 yBy:(double)arg2;
- (id)insetBy:(double)arg1;
- (id)expandXBy:(double)arg1 yBy:(double)arg2;
- (id)expandBy:(double)arg1;
- (id)moveToPoint:(id)arg1 withOffset:(id)arg2;
- (id)innerOffsetOfPoint:(id)arg1;
- (BOOL)containsPoint:(id)arg1 withInsetMargin:(double)arg2;
- (BOOL)containsPoint:(id)arg1;
- (void)translateFromRect:(id)arg1 toRect:(id)arg2;
- (id)absoluteRectInsideRect:(id)arg1;
- (id)relativeRectInsideRect:(id)arg1;

@end

