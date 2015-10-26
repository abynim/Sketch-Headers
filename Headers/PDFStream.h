#import "NSObject.h"

@class NSData, NSDictionary;

@interface PDFStream : NSObject
{
    int _format;
    struct CGPDFStream *_stream;
    NSData *_data;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) struct CGPDFStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)getDataAndFormat;
- (id)initWithStream:(struct CGPDFStream *)arg1;

@end

