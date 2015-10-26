#import "NSObject.h"

@class MSDocumentData, MSWebExporter, NSURL;

@interface MSWebServerDocumentInfo : NSObject
{
    MSDocumentData *_document;
    NSURL *_localURL;
    NSURL *_publicURL;
    MSWebExporter *_exporter;
}

@property(retain, nonatomic) MSWebExporter *exporter; // @synthesize exporter=_exporter;
@property(retain, nonatomic) NSURL *publicURL; // @synthesize publicURL=_publicURL;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(nonatomic) __weak MSDocumentData *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1 localURL:(id)arg2 publicURL:(id)arg3 exporter:(id)arg4;

@end

