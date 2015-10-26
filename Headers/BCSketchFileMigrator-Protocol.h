#import "NSObject.h"

@class NSArray, NSData;

@protocol BCSketchFileMigrator <NSObject>
- (void)migrateResourcesNamed:(NSArray *)arg1 inFolderAtBookmark:(NSData *)arg2 withReply:(void (^)(BCSketchFileMigratorError *))arg3;
- (void)migrateDocumentAtBookmark:(NSData *)arg1 intoFolderAtBookmark:(NSData *)arg2 withReply:(void (^)(BCSketchFileMigratorError *))arg3;
- (void)validateDocumentAtBookmark:(NSData *)arg1 withReply:(void (^)(BCSketchFileMigratorError *))arg2;
@end

