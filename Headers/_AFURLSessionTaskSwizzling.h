#import "NSObject.h"

@interface _AFURLSessionTaskSwizzling : NSObject
{
}

+ (void)swizzleResumeAndSuspendMethodForClass:(Class)arg1;
+ (void)load;
- (void)af_suspend;
- (void)af_resume;
- (long long)state;

@end

