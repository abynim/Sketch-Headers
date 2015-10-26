#import "NSUserDefaults.h"

@interface NSUserDefaults (CHUserDefaultsAdditions)
+ (BOOL)registerBool:(BOOL)arg1 forKey:(id)arg2;
+ (float)registerFloat:(double)arg1 forKey:(id)arg2;
+ (long long)registerInteger:(long long)arg1 forKey:(id)arg2;
+ (id)registerObject:(id)arg1 forKey:(id)arg2;
@end

