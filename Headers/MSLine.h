#import "NSObject.h"

@interface MSLine : NSObject
{
    struct CGRect _area;
    BOOL _areaIsInitial;
    long long _type;
    double _position;
    unsigned long long _snapTag;
}

+ (id)linesForRect:(struct CGRect)arg1;
+ (id)verticalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2 snapTag:(unsigned long long)arg3;
+ (id)horizontalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2 snapTag:(unsigned long long)arg3;
+ (id)verticalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)horizontalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)verticalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
+ (id)horizontalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
+ (id)verticalLineWithPosition:(double)arg1;
+ (id)horizontalLineWithPosition:(double)arg1;
@property(readonly, nonatomic) unsigned long long snapTag; // @synthesize snapTag=_snapTag;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)GKLine;
- (id)description;
- (struct CGRect)dirtyAbsoluteRectInFrame:(struct CGRect)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)drawWithZoomValue:(double)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)initVerticalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
- (id)initHorizontalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;

@end

