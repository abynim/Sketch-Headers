#import "NSObject.h"

@class NSMutableData;

@interface CHIntegerStack : NSObject
{
    NSMutableData *_data;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (long long)peek;
- (long long)pop;
- (void)push:(long long)arg1;
- (id)init;

@end

