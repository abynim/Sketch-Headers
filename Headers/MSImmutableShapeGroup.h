#import "_MSImmutableShapeGroup.h"

@class NSBezierPath;

@interface MSImmutableShapeGroup : _MSImmutableShapeGroup
{
    BOOL _isEditingChild;
    NSBezierPath *_bezierPathWithTransformsForMasking;
    NSBezierPath *_bezierInBounds;
}

@property(nonatomic) BOOL isEditingChild; // @synthesize isEditingChild=_isEditingChild;
@property(retain, nonatomic) NSBezierPath *bezierInBounds; // @synthesize bezierInBounds=_bezierInBounds;
@property(retain, nonatomic) NSBezierPath *bezierPathWithTransformsForMasking; // @synthesize bezierPathWithTransformsForMasking=_bezierPathWithTransformsForMasking;
- (void).cxx_destruct;
- (id)initWithMutableModelObject:(id)arg1;

@end

