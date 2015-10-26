#import "MSPasteboardHelper.h"

@interface MSPasteboardWriter : MSPasteboardHelper
{
}

- (id)includedObjectIDsForLayers:(id)arg1;
- (id)bitmapRectForLayers:(id)arg1;
- (BOOL)shouldTrimBitmapForPasteboardLayers:(id)arg1;
- (void)writeLayers:(id)arg1 fromDocument:(id)arg2;

@end

