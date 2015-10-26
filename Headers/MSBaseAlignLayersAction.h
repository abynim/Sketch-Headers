#import "MSBaseAction.h"

#import "MSAltButtonTarget.h"

@class NSString;

@interface MSBaseAlignLayersAction : MSBaseAction <MSAltButtonTarget>
{
}

- (BOOL)canAlignToArtboardInstead;
- (BOOL)altButtonCanShowAltImage:(id)arg1;
- (BOOL)validate;
- (void)alignLayers:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;
- (id)alignmentRectForLayers:(id)arg1;
- (void)alignVectorPointsToKey:(id)arg1;
- (void)alignToKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

