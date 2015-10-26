#import "NSObject.h"

@class MSPasteboardLayers, NSArray, NSPasteboard;

@protocol MSPasteboardReader <NSObject>
- (MSPasteboardLayers *)pasteboardDataFromPasteboard:(NSPasteboard *)arg1 sender:(id <NSDraggingInfo>)arg2;
- (NSArray *)supportedPasteboardTypes;
@end

