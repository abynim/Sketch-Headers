#import "ZKArchive.h"

@class NSMutableArray, NSMutableData;

@interface ZKDataArchive : ZKArchive
{
    NSMutableData *_data;
    NSMutableArray *_inflatedFiles;
}

+ (id)archiveWithArchiveData:(id)arg1;
+ (id)archiveWithArchivePath:(id)arg1;
@property(retain) NSMutableArray *inflatedFiles; // @synthesize inflatedFiles=_inflatedFiles;
@property(retain) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)init;
- (long long)deflateData:(id)arg1 withFilename:(id)arg2 andAttributes:(id)arg3;
- (long long)deflateFile:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (long long)deflateDirectory:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (long long)deflateFiles:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (unsigned long long)inflateInFolder:(id)arg1 withFolderName:(id)arg2 usingResourceFork:(BOOL)arg3;
- (id)inflateFile:(id)arg1 attributes:(id *)arg2;
- (unsigned long long)inflateAll;

@end

