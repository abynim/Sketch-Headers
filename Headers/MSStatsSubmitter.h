#import "NSObject.h"

@interface MSStatsSubmitter : NSObject
{
}

+ (void)saveSubmission:(id)arg1;
+ (BOOL)shouldSubmit:(id)arg1;
+ (void)submitOS:(id)arg1 version:(id)arg2;
+ (void)getOS:(id *)arg1 version:(id *)arg2;
+ (void)submit;

@end

