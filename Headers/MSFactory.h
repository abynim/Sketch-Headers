#import "CHSingletonObject.h"

@class MSVersionedArchive, NSMutableArray;

@interface MSFactory : CHSingletonObject
{
    NSMutableArray *factoryObjects;
    MSVersionedArchive *_archive;
}

+ (id)filename;
+ (id)factory;
@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (unsigned long long)indexOfObjectByComparingPointers:(id)arg1;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)load;
- (void)loadOnDemand;
- (void)save;
- (id)archivesNeedingMigration;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

