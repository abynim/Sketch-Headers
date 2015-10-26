#import "_MSSharedObjectContainer.h"

#import "MSSharedObjectContainerDelegate.h"

@class NSString;

@interface MSSharedObjectContainer : _MSSharedObjectContainer <MSSharedObjectContainerDelegate>
{
    id <MSSharedObjectContainerDelegate> _delegate;
}

@property(retain, nonatomic) id <MSSharedObjectContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)objectsSortedByName;
- (void)removeInvalidInstancesInLayers:(id)arg1;
- (void)enumeratePotentialInstancesInLayer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)sharedObjectsInLayer:(id)arg1;
- (void)syncInstance:(struct MSModelObject *)arg1 withTemplateInstance:(struct MSModelObject *)arg2 referenceInstance:(struct MSModelObject *)arg3;
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
- (id)instancesOf:(id)arg1 inGroup:(id)arg2;
- (id)mergeSharedObjectWithName:(id)arg1 sharedObjectID:(id)arg2 instance:(struct MSModelObject *)arg3;
- (void)linkInstances:(id)arg1 fromSharedObject:(id)arg2;
- (void)unlinkInstances:(id)arg1 toSharedObject:(id)arg2;
- (void)registerUndoForUnlinkingInstances:(id)arg1 fromSharedObject:(id)arg2;
- (void)registerUndoForLinkingInstances:(id)arg1 toSharedObject:(id)arg2;
- (void)removeSharedObject:(id)arg1;
- (id)addSharedObjectWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;
- (Class)sharedObjectClass;
- (id)rootLayersIncludingSymbols:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

