#import "NSObject.h"

@interface MSSymbolCreator : NSObject
{
}

+ (BOOL)canCreateSymbolFromLayers:(id)arg1;
+ (void)moveSlicesOutOfGroup:(id)arg1;
+ (id)groupForCreatingSymbolsFromLayers:(id)arg1;
+ (BOOL)unHideLayersIfNecessary:(id)arg1;
+ (id)createSymbolFromLayers:(id)arg1 suggestedName:(id)arg2;

@end

