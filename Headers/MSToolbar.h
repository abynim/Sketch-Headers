#import "NSToolbar.h"

@interface MSToolbar : NSToolbar
{
    BOOL shouldChange;
}

- (void)setSizeMode:(unsigned long long)arg1;
- (void)finishedSetUp;

@end

