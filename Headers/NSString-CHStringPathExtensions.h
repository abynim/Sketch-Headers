#import "NSString.h"

@interface NSString (CHStringPathExtensions)
- (id)expandTilde;
- (id)withExtension:(id)arg1;
- (id)withoutExtension;
- (id)extension;
- (id)lastChild;
- (id)child:(id)arg1;
- (id)parent;
@end

