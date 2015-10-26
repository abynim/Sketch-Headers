#import "_MSImmutableStyleFill.h"

#import "MSImageOwner.h"

@class NSString;

@interface MSImmutableStyleFill : _MSImmutableStyleFill <MSImageOwner>
{
    double _parentLayerCachedOpacity;
}

@property(nonatomic) double parentLayerCachedOpacity; // @synthesize parentLayerCachedOpacity=_parentLayerCachedOpacity;
- (id)NSImage;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

