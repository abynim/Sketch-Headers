#import "_MSSharedObject.h"

@interface MSSharedObject : _MSSharedObject
{
}

- (id)parentGroup;
- (void)prepareToBecomeSharedObjectValue:(struct MSModelObject *)arg1;
- (unsigned long long)type;
- (void)removeInvalidInstanceIDs:(id)arg1;
- (BOOL)isOutOfSyncWithInstance:(struct MSModelObject *)arg1;
- (id)container;
- (struct MSModelObject *)newUnregisteredInstance;
- (struct MSModelObject *)newInstance;
- (BOOL)isSharedObjectForInstance:(struct MSModelObject *)arg1;
- (void)unregisterInstance:(struct MSModelObject *)arg1;
- (void)registerInstance:(struct MSModelObject *)arg1;
- (id)defaultName;
- (void)objectDidInit;
- (id)initWithName:(id)arg1 sharedObjectID:(id)arg2 value:(struct MSModelObject *)arg3;
- (id)initWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;

@end

