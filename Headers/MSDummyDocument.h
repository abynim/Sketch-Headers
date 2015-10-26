#import "NSDocument.h"

@interface MSDummyDocument : NSDocument
{
}

+ (id)readableTypes;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

