#import "NSObject.h"

@class NSData, NSString, NSURL, PDFScanner;

@protocol PDFParser <NSObject>
- (NSString *)name;
- (unsigned long long)pageCount;
- (void)parseWithProgress:(void (^)(void))arg1;
- (void)loadDocumentFromData:(NSData *)arg1;
- (void)loadDocumentFromURL:(NSURL *)arg1;
- (id)initWithScanner:(PDFScanner *)arg1;
@end

