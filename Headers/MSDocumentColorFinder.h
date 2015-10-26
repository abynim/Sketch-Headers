#import "NSObject.h"

@interface MSDocumentColorFinder : NSObject
{
}

+ (id)commonColorsForPages:(id)arg1;
+ (id)sortColorsByUsage:(id)arg1;
+ (void)findColorsInPages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)initialize;

@end

