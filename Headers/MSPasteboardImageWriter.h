#import "NSObject.h"

#import "MSPasteboardWriter.h"

@class NSString;

@interface MSPasteboardImageWriter : NSObject <MSPasteboardWriter>
{
}

- (id)includedObjectIDsForLayers:(id)arg1;
- (BOOL)containsSingleArtboard:(id)arg1;
- (struct CGRect)bitmapRectForLayers:(id)arg1;
- (id)exportRequestForPasteboardLayers:(id)arg1;
- (void)writeData:(id)arg1 toPasteboard:(id)arg2;
- (id)supportedPasteboardTypes;
- (BOOL)canWriteDataToPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

