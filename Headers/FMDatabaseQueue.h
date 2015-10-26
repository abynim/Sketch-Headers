#import "NSObject.h"

@class FMDatabase, NSObject<OS_dispatch_queue>, NSString;

@interface FMDatabaseQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
    int _openFlags;
}

+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithPath:(id)arg1;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (BOOL)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2;

@end

