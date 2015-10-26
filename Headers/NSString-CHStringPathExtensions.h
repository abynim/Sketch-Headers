#import "NSString.h"

@interface NSString (CHStringPathExtensions)
- (BOOL)hasExtension:(id)arg1;
- (id)expandTilde;
- (id)withExtension:(id)arg1;
- (id)withoutExtension;
- (id)extension;
- (id)child:(id)arg1;
- (id)parent;
@end

