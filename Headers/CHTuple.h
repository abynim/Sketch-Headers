#import "NSObject.h"

@interface CHTuple : NSObject
{
    id _first;
    id _second;
}

+ (id)tupleWith:(id)arg1 and:(id)arg2;
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)each:(CDUnknownBlockType)arg1;

@end

