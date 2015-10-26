#import "NSObject.h"

@class NSBezierPath;

@interface MSBezierInterpreter : NSObject
{
    BOOL _pathIsClosed;
    NSBezierPath *_bezierPath;
    struct CGRect _rect;
}

+ (id)pointsFromBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) BOOL pathIsClosed; // @synthesize pathIsClosed=_pathIsClosed;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (void).cxx_destruct;
- (id)points;

@end

