#import "NSObject.h"

#import "MSImporter.h"

@class NSString, SVGImporter;

@interface MSSVGImporter : NSObject <MSImporter>
{
    SVGImporter *_importer;
    id _graph;
}

+ (id)svgImporter;
@property(retain, nonatomic) id graph; // @synthesize graph=_graph;
@property(retain, nonatomic) SVGImporter *importer; // @synthesize importer=_importer;
- (void).cxx_destruct;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (id)firstPhaseSubtitle;
- (void)finishImporting;
- (void)importIntoGroup:(id)arg1 name:(id)arg2 images:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

