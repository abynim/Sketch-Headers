#import "MSAssetCollection.h"

@class MSVersionedArchive;

@interface MSPersistentAssetCollection : MSAssetCollection
{
    MSVersionedArchive *_archive;
}

+ (id)assetCollectionWithName:(id)arg1;
+ (id)assetCollectionByMigratingPresetsFromSources:(id)arg1;
+ (id)defaultMigrationArchiveForPresetNamed:(id)arg1;
+ (id)defaultMigrationSources;
@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)resourceNeedingMigration;
- (void)save;

@end

