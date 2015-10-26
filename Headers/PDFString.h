#import "NSObject.h"

@interface PDFString : NSObject
{
    struct CGPDFString *_ref;
}

@property(nonatomic) struct CGPDFString *ref; // @synthesize ref=_ref;
- (id)stringWithMap:(id)arg1;
- (id)data;
- (id)string;
- (id)initWithStringRef:(struct CGPDFString *)arg1;

@end

