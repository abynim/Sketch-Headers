#import "_MSImmutablePage.h"

@class NSArray;

@interface MSImmutablePage : _MSImmutablePage
{
    BOOL _hasBlendedLayer;
    NSArray *_cachedArtboards;
}

@property(nonatomic) BOOL hasBlendedLayer; // @synthesize hasBlendedLayer=_hasBlendedLayer;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
- (void).cxx_destruct;
- (id)initWithMutableModelObject:(id)arg1;

@end

