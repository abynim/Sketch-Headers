#import "NSObject.h"

#import "MSPasteboardReader.h"

@class NSString;

@interface MSPasteboardImagesReader : NSObject <MSPasteboardReader>
{
}

- (id)pasteboardDataFromPasteboard:(id)arg1 sender:(id)arg2;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

