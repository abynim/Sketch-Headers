#import "NSObject.h"

@class FMDatabaseQueue, NSMutableDictionary, NSURL;

@interface BCStructuredFile : NSObject
{
    NSURL *_url;
    NSMutableDictionary *_cachedMetadata;
    FMDatabaseQueue *_db;
}

+ (id)newFileWithURL:(id)arg1;
+ (id)fileWithURL:(id)arg1;
@property(retain, nonatomic) FMDatabaseQueue *db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableDictionary *cachedMetadata; // @synthesize cachedMetadata=_cachedMetadata;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)readMetaData:(id *)arg1;
- (BOOL)databaseIsValid;
- (BOOL)setupTables:(id *)arg1;
- (BOOL)close:(id *)arg1;
- (BOOL)writeData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)dataWithKey:(id)arg1 error:(id *)arg2;
- (void)setMetaData:(id)arg1 withKey:(id)arg2;
- (id)metaDataWithKey:(id)arg1;
- (id)metadata;
- (BOOL)openWithMode:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)create:(id *)arg1;
- (id)initWithURL:(id)arg1;

@end

