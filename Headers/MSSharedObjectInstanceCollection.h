#import "NSObject.h"

@class NSMutableDictionary;

@interface MSSharedObjectInstanceCollection : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)collectionWithInstances:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)removeAllInstances;
- (id)instancesOfType:(unsigned long long)arg1;
- (void)addInstance:(id)arg1;
- (id)init;

@end

