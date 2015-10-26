#import "NSObject.h"

@class MSPage, NSMutableDictionary, NSString, NSURL;

@interface MSFramerExporter : NSObject
{
    MSPage *_page;
    NSString *_documentName;
    NSURL *_documentURL;
    NSMutableDictionary *_exportRequestsForLayer;
}

@property(retain, nonatomic) NSMutableDictionary *exportRequestsForLayer; // @synthesize exportRequestsForLayer=_exportRequestsForLayer;
@property(copy, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(copy, nonatomic) NSString *documentName; // @synthesize documentName=_documentName;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)temporaryFolder;
- (id)exportableLayers;
- (id)checkForErrors;
- (id)export;
- (id)disableShadowsForParentsOfView:(id)arg1;
- (id)calculateExportRequestForLayer:(id)arg1;
- (id)exportRequestForLayer:(id)arg1;
- (BOOL)viewCanHaveMask:(id)arg1;
- (struct CGRect)rectWithStyleSizeForLayer:(id)arg1;
- (struct CGPoint)absoluteOriginForRect:(struct CGRect)arg1 ofLayer:(id)arg2;
- (id)metadataForRect:(struct CGRect)arg1;
- (id)coordinatesFor:(id)arg1;
- (void)enableLayerMasks:(id)arg1;
- (id)disableMasksForView:(id)arg1;
- (id)cleanFilenameFor:(id)arg1;
- (BOOL)viewShouldBeTraversed:(id)arg1;
- (BOOL)viewHasSubviews:(id)arg1;
- (BOOL)viewShouldBeExtracted:(id)arg1;
- (id)viewsFromLayers:(id)arg1;
- (id)subviewsForView:(id)arg1;
- (BOOL)viewIsArtboard:(id)arg1;
- (id)firstMaskForLayer:(id)arg1;
- (id)coordinatesForMask:(id)arg1;
- (id)maskBoundsFor:(id)arg1;
- (id)imageMetadataForLayer:(id)arg1;
- (id)extractMetadataFrom:(id)arg1;
- (void)saveStructureToJSONJS:(id)arg1 toPath:(id)arg2;
- (void)saveStructureToJSON:(id)arg1 toPath:(id)arg2;
- (id)metadataFromViews:(id)arg1;
- (void)exportJSONToFolder:(id)arg1 views:(id)arg2;
- (void)exportView:(id)arg1 withRequest:(id)arg2 toPath:(id)arg3;
- (BOOL)layerGroupHasVisibleContents:(id)arg1;
- (id)hideSubviewsOfLayer:(id)arg1 exportPath:(id)arg2;
- (id)exportSubviewsOfLayer:(id)arg1 exportPath:(id)arg2;
- (void)exportAssetsForView:(id)arg1 inFolder:(id)arg2;
- (void)exportImagesToFolder:(id)arg1 views:(id)arg2;

@end

