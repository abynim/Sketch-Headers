#import "_MSExportSize.h"

@interface MSExportSize : _MSExportSize
{
}

+ (id)defaultNameForScale:(double)arg1;
+ (id)migrateExportSizesWithName:(id)arg1 currentResolution:(long long)arg2 includeRetinaVersion:(BOOL)arg3;
+ (id)validFormats;
+ (id)sizeWithScale:(double)arg1 name:(id)arg2 format:(id)arg3;
- (id)description;
- (id)defaultName;
- (void)remove;
- (id)parentLayer;
- (id)initWithScale:(double)arg1 name:(id)arg2 format:(id)arg3;
- (BOOL)isScalableExport;
- (BOOL)isVectorExport;

@end

