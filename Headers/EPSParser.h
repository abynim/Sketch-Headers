#import "NSObject.h"

#import "PDFParser.h"

@class NSString, PDFParser;

@interface EPSParser : NSObject <PDFParser>
{
    PDFParser *_parser;
}

@property(retain, nonatomic) PDFParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (void)debugConvertedFile:(id)arg1;
- (id)name;
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

