#import "NSImageRep.h"

@interface NSImageRep (MSSmallerArchiving)
- (id)dataForArchiving;
- (BOOL)hasEPSRepresentation;
- (BOOL)hasPDFRepresentation;
@end

