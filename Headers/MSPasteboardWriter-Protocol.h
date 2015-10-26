#import "NSObject.h"

@class MSPasteboardLayers, NSArray, NSPasteboard;

@protocol MSPasteboardWriter <NSObject>
- (void)writeData:(MSPasteboardLayers *)arg1 toPasteboard:(NSPasteboard *)arg2;
- (NSArray *)supportedPasteboardTypes;
- (BOOL)canWriteDataToPasteboard:(NSPasteboard *)arg1;
@end

