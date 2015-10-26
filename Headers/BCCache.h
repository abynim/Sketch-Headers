#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSRecursiveLock;

@interface BCCache : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *cachedObjectsByOwner;
    NSRecursiveLock *recursiveLocks[10];
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeAllCachedObjects;
- (void)removeCachedObjectsForOwner:(id)arg1;
- (void)removeCachedObjectForOwner:(id)arg1 andKey:(id)arg2;
- (id)cachedObjectForOwner:(id)arg1 andKey:(id)arg2 orCreateWithBlock:(CDUnknownBlockType)arg3;
- (void)setCachedObject:(id)arg1 forOwner:(id)arg2 andKey:(id)arg3;
- (id)cachedObjectForOwner:(id)arg1 andKey:(id)arg2;
- (id)init;

@end

