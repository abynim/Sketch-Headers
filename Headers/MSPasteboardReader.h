#import "MSPasteboardHelper.h"

@class MSContentDrawView, MSLayerArray;

@interface MSPasteboardReader : MSPasteboardHelper
{
    BOOL _dropping;
    MSContentDrawView *_view;
    MSLayerArray *_originalSelectedLayers;
    struct CGPoint _dropPoint;
}

+ (unsigned long long)importModeWithOptionKeyPressed:(BOOL)arg1;
@property(retain, nonatomic) MSLayerArray *originalSelectedLayers; // @synthesize originalSelectedLayers=_originalSelectedLayers;
@property(nonatomic) struct CGPoint dropPoint; // @synthesize dropPoint=_dropPoint;
@property(nonatomic) BOOL dropping; // @synthesize dropping=_dropping;
@property(retain, nonatomic) MSContentDrawView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (BOOL)displayWarningsForUnsupportedFileFormats:(id)arg1;
- (id)readFilesWithImportMode:(unsigned long long)arg1;
- (id)readSVGFromURL:(id)arg1;
- (id)readPDFFromURL:(id)arg1;
- (id)readPDF;
- (id)groupForPastingOrDropping;
- (id)readEPSFromURL:(id)arg1;
- (id)readEPS;
- (id)textLayerFromString:(id)arg1;
- (id)readStrings;
- (struct CGRect)frameForImageWithSize:(struct CGSize)arg1 inGroup:(id)arg2;
- (id)insertBitmapLayerWithImage:(id)arg1 intoGroup:(id)arg2 name:(id)arg3;
- (id)readImage:(id)arg1 name:(id)arg2;
- (id)readImage;
- (void)processLayer:(id)arg1 insertedIntoGroup:(id)arg2;
- (void)insertNewLayer:(id)arg1 intoGroup:(id)arg2;
- (void)centerNewLayers:(id)arg1 inRect:(struct CGRect)arg2 onlyIfOutsideGroup:(id)arg3;
- (void)centerNewLayersInCanvas:(id)arg1;
- (BOOL)layersVisibleInCanvas:(id)arg1;
- (void)offsetLayers:(id)arg1 by:(struct CGPoint)arg2;
- (id)readLayers;
- (BOOL)containsReadableData;
- (unsigned long long)contentType;
- (id)pasteboardTypes;
- (void)readWithImportMode:(unsigned long long)arg1;

@end

