#import "NSUserDefaults.h"

@interface NSUserDefaults (NSUserDefaultsAdditions)
- (void)registerObject:(id)arg1 forKey:(id)arg2;
- (void)registerColor:(id)arg1 forKey:(id)arg2;
- (void)registerFloat:(float)arg1 forKey:(id)arg2;
- (void)registerBool:(BOOL)arg1 forKey:(id)arg2;
- (void)registerInt:(int)arg1 forKey:(id)arg2;
- (id)colorForKey:(id)arg1;
- (void)setColor:(id)arg1 forKey:(id)arg2;
@end

