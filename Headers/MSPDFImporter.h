#import "NSObject.h"

#import "MSImporter.h"

@class MSPDFScanner, NSString;

@interface MSPDFImporter : NSObject <MSImporter>
{
    id <PDFParser> _parser;
    MSPDFScanner *_scanner;
    NSString *_type;
}

+ (id)epsImporter;
+ (id)pdfImporter;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) MSPDFScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) id <PDFParser> parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (id)firstPhaseSubtitle;
- (void)finishImporting;
- (void)importIntoGroup:(id)arg1 name:(id)arg2 images:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)name;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

