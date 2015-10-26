#import "NSObject.h"

@class NSMutableData;

@interface CHFloatStack : NSObject
{
    NSMutableData *_data;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (double)peek;
- (double)pop;
- (void)push:(double)arg1;
- (id)init;

@end

