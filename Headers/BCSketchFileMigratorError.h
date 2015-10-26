#import "NSError.h"

@interface BCSketchFileMigratorError : NSError
{
}

+ (id)errorWithCode:(unsigned long long)arg1 underlyingCode:(unsigned long long)arg2 missingFonts:(id)arg3;
+ (id)errorWithCode:(unsigned long long)arg1;

@end

