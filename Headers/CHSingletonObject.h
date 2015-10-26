#import "NSObject.h"

@interface CHSingletonObject : NSObject
{
}

+ (id)sharedController;
+ (void)resetSharedController;
- (void)awakeFromNib;
- (id)init;

@end

