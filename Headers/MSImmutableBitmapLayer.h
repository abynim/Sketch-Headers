#import "_MSImmutableBitmapLayer.h"

#import "MSImageOwner.h"

@class NSString;

@interface MSImmutableBitmapLayer : _MSImmutableBitmapLayer <MSImageOwner>
{
    BOOL _treatAsAlpha;
}

@property(nonatomic) BOOL treatAsAlpha; // @synthesize treatAsAlpha=_treatAsAlpha;
- (id)NSImage;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

