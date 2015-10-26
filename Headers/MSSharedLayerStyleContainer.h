#import "_MSSharedLayerStyleContainer.h"

@interface MSSharedLayerStyleContainer : _MSSharedLayerStyleContainer
{
}

- (void)registerInstance:(id)arg1 withSharedStyle:(id)arg2;
- (unsigned long long)numberOfSharedStyles;
- (long long)indexOfSharedStyle:(id)arg1;
- (id)sharedStyleAtIndex:(unsigned long long)arg1;
- (id)sharedStyleWithID:(id)arg1;
- (id)sharedStyleForInstance:(id)arg1;
- (BOOL)isSharedStyleForInstance:(id)arg1;
- (void)removeSharedStyle:(id)arg1;
- (id)mergeSharedStyleWithName:(id)arg1 sharedStyleID:(id)arg2 instance:(id)arg3;
- (id)addSharedStyleWithName:(id)arg1 firstInstance:(id)arg2;
- (void)enumeratePotentialInstancesInLayer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)validStyleType;
- (Class)sharedObjectClass;

@end

