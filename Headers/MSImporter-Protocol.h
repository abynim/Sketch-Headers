#import "NSObject.h"

@class MSImageCollection, MSLayerGroup, NSData, NSString, NSURL;

@protocol MSImporter <NSObject>
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (NSString *)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (NSString *)firstPhaseSubtitle;
- (void)finishImporting;
- (void)importIntoGroup:(MSLayerGroup *)arg1 name:(NSString *)arg2 images:(MSImageCollection *)arg3 progress:(void (^)(void))arg4;
- (unsigned long long)prepareToImportFromURL:(NSURL *)arg1;
- (unsigned long long)prepareToImportFromData:(NSData *)arg1;
@end

