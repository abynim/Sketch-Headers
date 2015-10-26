#import "NSObject.h"

@interface MSPair : NSObject
{
    id _first;
    id _second;
}

+ (id)pairWith:(id)arg1 and:(id)arg2;
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (void).cxx_destruct;

@end

