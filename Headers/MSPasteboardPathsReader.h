#import "NSObject.h"

#import "MSPasteboardReader.h"

@class NSString;

@interface MSPasteboardPathsReader : NSObject <MSPasteboardReader>
{
}

+ (void)initialize;
- (unsigned long long)imageImportMode;
- (id)importLayerFromPath:(id)arg1;
- (id)importerForPath:(id)arg1;
- (BOOL)fileIsVectorFormat:(id)arg1;
- (id)layerFromPath:(id)arg1 mode:(unsigned long long)arg2;
- (id)pasteboardDataFromPasteboard:(id)arg1 sender:(id)arg2;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

