#import "NSImage.h"

@interface NSImage (MSSmallerArchiving)
+ (id)imageFromDataArchive:(id)arg1;
- (id)PDFImageRep;
- (id)EPSImageRep;
- (BOOL)hasEPSData;
- (id)bitmapData;
- (BOOL)hasPDFData;
- (id)dataForArchiving;
@end

