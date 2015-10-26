#import "NSObject.h"

@interface MSModelObjectInstanceInfo : NSObject
{
    unsigned long long _current;
    unsigned long long _total;
}

@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) unsigned long long current; // @synthesize current=_current;
- (id)description;

@end

