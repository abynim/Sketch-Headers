#import "NSObject.h"

@class NSMutableArray;

@interface MSTileThreadPool : NSObject
{
    long long nextThreadIndex;
    NSMutableArray *_threads;
}

+ (id)thread;
+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *threads; // @synthesize threads=_threads;
- (void).cxx_destruct;
- (id)thread;
- (void)threadMain;
- (id)init;

@end

