#import "NSObject.h"

@class NSColorSpace;

@interface MSSliceExporter : NSObject
{
    BOOL _honorSaveForWebPreference;
    NSColorSpace *_colorSpace;
}

+ (id)dataForRequest:(id)arg1 colorSpace:(id)arg2 honorSaveForWeb:(BOOL)arg3;
+ (id)dataForRequest:(id)arg1 colorSpace:(id)arg2;
+ (id)dataForRequest:(id)arg1;
@property(nonatomic) BOOL honorSaveForWebPreference; // @synthesize honorSaveForWebPreference=_honorSaveForWebPreference;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)clearLayerCaches:(id)arg1;
- (id)savePanelWithDefaultFilename:(id)arg1 options:(id)arg2;
- (id)pathForSavingIndividualSlice:(id)arg1 options:(id)arg2;
- (id)openPanelWithOptions:(id)arg1;
- (id)directoryPathForSavingMultipleImagesWithOptions:(id)arg1;
- (void)displayNoSlicesWarning;
- (BOOL)warnForPossiblyOverwritingFilesWithSlices:(id)arg1 toFolder:(id)arg2;
- (void)saveSlices:(id)arg1 toFolder:(id)arg2;
- (id)strippedSliceName:(id)arg1;
- (void)exportSlice:(id)arg1;
- (void)exportSlices:(id)arg1;
- (void)writeSliceWithCurrentSettings:(id)arg1 toPathWithName:(id)arg2;
- (void)writeSlice:(id)arg1 toPathWithName:(id)arg2;
- (id)makeFilenameProperPathIfNecessary:(id)arg1;
- (id)dataForRequest:(id)arg1;

@end

