#import "NSObject.h"

@interface MSDuplicateOffsetTracker : NSObject
{
    long long multiplier;
}

- (double)offset;
- (void)increment;
- (void)resetToInitialOffset;
- (void)reset;

@end

