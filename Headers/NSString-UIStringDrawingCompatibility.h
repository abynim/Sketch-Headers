#import "NSString.h"

@interface NSString (UIStringDrawingCompatibility)
- (struct CGSize)sizeWithFont:(id)arg1;
- (void)drawCenteredAtPoint:(struct CGPoint)arg1 withFont:(id)arg2 color:(id)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
@end

