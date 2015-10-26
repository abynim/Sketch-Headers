#import "MSBaseAction.h"

#import "MSAltButtonTarget.h"

@class NSString;

@interface MSBaseAlignLayersAction : MSBaseAction <MSAltButtonTarget>
{
}

- (BOOL)altButtonCanShowAltImage:(id)arg1;
- (BOOL)selectionContainsNoArtboards;
- (BOOL)selectionContainsOnlyArtboards;
- (BOOL)validate;
- (void)alignVectorPointsToKey:(id)arg1;
- (BOOL)canAlignToArtboardInstead;
- (void)alignToKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

