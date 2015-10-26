#import "MSDefaultArchive.h"

@interface MSDefaultStyle : MSDefaultArchive
{
}

+ (void)saveStyleAndPatterns;
+ (void)loadStyleAndPatterns;
+ (void)setDefaultStyle:(id)arg1;
+ (id)defaultStyle;
+ (void)resetCachedStyleForTesting;
- (id)newObject;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;

@end

