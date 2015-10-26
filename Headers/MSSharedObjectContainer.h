#import "_MSSharedObjectContainer.h"

@interface MSSharedObjectContainer : _MSSharedObjectContainer
{
    id <MSSharedObjectContainerDelegate> _delegate;
}

@property(retain, nonatomic) id <MSSharedObjectContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateIDOfSharedObject:(id)arg1 andRenameTo:(id)arg2;
- (id)objectsSortedByName;
- (void)enumeratePotentialInstancesInContainer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)sharedObjectsInLayers:(id)arg1;
- (id)sharedObjectsInLayer:(id)arg1;
- (void)syncInstance:(struct MSModelObject *)arg1 withTemplateInstance:(struct MSModelObject *)arg2;
- (void)synchroniseInstancesOfSharedObject:(id)arg1 withInstance:(struct MSModelObject *)arg2;
- (void)updateValueOfSharedObject:(id)arg1 byCopyingInstance:(struct MSModelObject *)arg2;
- (BOOL)updateInstancesOfSharedObject:(id)arg1 withValue:(struct MSModelObject *)arg2;
- (BOOL)syncSharedObjectWithInstance:(struct MSModelObject *)arg1;
- (id)layersToIterateOver;
- (void)unregisterInstance:(struct MSModelObject *)arg1;
- (void)registerInstance:(struct MSModelObject *)arg1 withSharedObject:(id)arg2;
- (unsigned long long)numberOfSharedObjects;
- (long long)indexOfSharedObject:(id)arg1;
- (id)sharedObjectAtIndex:(unsigned long long)arg1;
- (id)sharedObjectWithID:(id)arg1;
- (id)sharedObjectForInstance:(struct MSModelObject *)arg1;
- (BOOL)isSharedObjectForInstance:(struct MSModelObject *)arg1;
- (id)instancesOf:(id)arg1 inContainer:(id)arg2;
- (void)linkInstances:(id)arg1 fromSharedObject:(id)arg2;
- (void)unlinkInstances:(id)arg1 toSharedObject:(id)arg2;
- (id)relinkSharedObjectInstance:(struct MSModelObject *)arg1;
- (void)relinkSharedObjectsInArray:(id)arg1;
- (void)mergeSharedObjects:(id)arg1;
- (id)mergeSharedObjectWithName:(id)arg1 sharedObjectID:(id)arg2 instance:(struct MSModelObject *)arg3;
- (void)registerUndoForUnlinkingInstances:(id)arg1 fromSharedObject:(id)arg2;
- (void)registerUndoForLinkingInstances:(id)arg1 toSharedObject:(id)arg2;
- (void)removeSharedObject:(id)arg1;
- (id)addSharedObjectWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;
- (Class)sharedObjectClass;

@end

