#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface MSVersionedArchive : NSObject
{
    NSURL *_url;
    NSURL *_baseURL;
    NSData *_data;
    unsigned long long _version;
    NSString *_alternateFolder;
}

+ (id)versionedURLWithBase:(id)arg1 extension:(id)arg2 version:(unsigned long long)arg3;
+ (id)globalDirectory;
+ (id)globalArchiveWithName:(id)arg1 extension:(id)arg2 version:(long long)arg3;
@property(retain, nonatomic) NSString *alternateFolder; // @synthesize alternateFolder=_alternateFolder;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)archiveRootObject:(id)arg1 error:(id *)arg2;
- (id)unarchiveRootObjectVersion:(long long *)arg1 error:(id *)arg2;
- (id)URLNeedingMigration;
- (id)existingURLFoundAtBaseURL:(id *)arg1;
- (id)existingURL;
- (id)existingURLBasedOnFullURL:(id)arg1;
- (id)initWithURL:(id)arg1 version:(long long)arg2;

@end

