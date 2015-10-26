#import "_MSImmutableStyle.h"

@interface MSImmutableStyle : _MSImmutableStyle
{
    BOOL _hasBitmapStylesEnabled;
}

@property(nonatomic) BOOL hasBitmapStylesEnabled; // @synthesize hasBitmapStylesEnabled=_hasBitmapStylesEnabled;
- (id)initWithMutableModelObject:(id)arg1;

@end

