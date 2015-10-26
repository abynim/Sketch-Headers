#import "NSObject.h"

@interface BCMagnifier : NSObject
{
}

+ (unsigned int)displayIDForScreenPoint:(struct CGPoint)arg1;
+ (id)colorFromScreenGrab:(id)arg1 mouse:(struct CGPoint)arg2;
+ (void)pickColorWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (struct CGPoint)pointInFlippedCoordinates:(struct CGPoint)arg1;

@end

