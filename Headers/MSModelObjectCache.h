#import "NSObject.h"

@class NSMutableDictionary;

@interface MSModelObjectCache : NSObject
{
    NSMutableDictionary *_cache;
    int _lock;
}

- (void).cxx_destruct;
- (id)init;

@end

