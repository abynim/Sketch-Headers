#import "_MSImmutableShapePathLayer.h"

@interface MSImmutableShapePathLayer : _MSImmutableShapePathLayer
{
    BOOL _isEditing;
}

@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (id)initWithMutableModelObject:(id)arg1;

@end

