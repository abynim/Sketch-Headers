#import "_MSImmutableStyledLayer.h"

@interface MSImmutableStyledLayer : _MSImmutableStyledLayer
{
    BOOL _hasBitmapStylesEnabled;
}

@property(nonatomic) BOOL hasBitmapStylesEnabled; // @synthesize hasBitmapStylesEnabled=_hasBitmapStylesEnabled;
- (id)initWithMutableModelObject:(id)arg1;

@end

