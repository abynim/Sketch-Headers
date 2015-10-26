#import "CHSingletonObject.h"

@class MSVersionedArchive;

@interface MSDefaultArchive : CHSingletonObject
{
    MSVersionedArchive *_archive;
}

@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)setDefaultObject:(id)arg1;
- (id)newObject;
- (id)defaultObject;
- (id)archivesNeedingMigration;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;

@end

