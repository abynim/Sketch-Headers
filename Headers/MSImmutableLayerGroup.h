#import "_MSImmutableLayerGroup.h"

@interface MSImmutableLayerGroup : _MSImmutableLayerGroup
{
    BOOL _containsSelectedItem;
    BOOL _isOpen;
}

@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) BOOL containsSelectedItem; // @synthesize containsSelectedItem=_containsSelectedItem;
- (id)initWithMutableModelObject:(id)arg1;

@end

