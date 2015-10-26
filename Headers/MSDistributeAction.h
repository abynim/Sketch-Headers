#import "MSBaseAction.h"

@interface MSDistributeAction : MSBaseAction
{
}

- (void)clearCachesIfNecessary:(id)arg1;
- (void)distributeLayers:(id)arg1 withSpace:(long long)arg2 forAxis:(unsigned long long)arg3;
- (long long)calculateRequiredSpaceBetweenLayers:(id)arg1 forAxis:(unsigned long long)arg2;
- (id)layersSortedForAxis:(unsigned long long)arg1;
- (void)distributeAlongAxis:(unsigned long long)arg1;
- (BOOL)validate;

@end

