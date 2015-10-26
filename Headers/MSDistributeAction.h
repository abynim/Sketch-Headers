#import "MSBaseAction.h"

@interface MSDistributeAction : MSBaseAction
{
}

- (void)clearCachesIfNecessary:(id)arg1;
- (void)distributeLayers:(id)arg1 withSpace:(long long)arg2 forAxis:(id)arg3;
- (long long)calculateRequiredSpaceBetweenLayers:(id)arg1 forAxis:(id)arg2;
- (id)layersSortedForAxis:(id)arg1;
- (void)distributeAlongAxis:(id)arg1;
- (id)validation;
- (BOOL)validate;

@end

