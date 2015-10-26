#import "NSObject.h"

#import "PDFParser.h"

@class NSString, PDFScanner;

@interface PDFParser : NSObject <PDFParser>
{
    NSString *_name;
    PDFScanner *_scanner;
    struct CGPDFDocument *_document;
}

@property(nonatomic) struct CGPDFDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) PDFScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)parseWithProgress:(CDUnknownBlockType)arg1;
- (unsigned long long)pageCount;
- (void)loadDocumentFromData:(id)arg1;
- (void)loadDocumentFromURL:(id)arg1;
- (id)initWithScanner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

