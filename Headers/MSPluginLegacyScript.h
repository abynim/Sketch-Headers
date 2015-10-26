#import "MSPluginScript.h"

@class NSString;

@interface MSPluginLegacyScript : MSPluginScript
{
    NSString *_processedScript;
}

+ (id)wrappedScript:(id)arg1 handler:(id)arg2;
@property(copy, nonatomic) NSString *processedScript; // @synthesize processedScript=_processedScript;
- (void).cxx_destruct;
- (id)scriptWithReplacedImports:(id)arg1 path:(id)arg2 importedURLs:(id)arg3;
@property(readonly, copy, nonatomic) NSString *handler;
- (id)script;
@property(readonly, copy, nonatomic) NSString *rawScript;

@end

