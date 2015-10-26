#import "NSObject.h"

@class NSMutableArray;

@interface GMAppleDouble : NSObject
{
    NSMutableArray *entries_;
}

+ (id)appleDoubleWithData:(id)arg1;
+ (id)appleDouble;
+ (void)zk_restoreAppleDoubleData:(id)arg1 toPath:(id)arg2;
+ (id)zk_appleDoubleDataForPath:(id)arg1;
- (void).cxx_destruct;
- (id)data;
- (id)entries;
- (BOOL)addEntriesFromAppleDoubleData:(id)arg1;
- (void)addEntryWithID:(int)arg1 data:(id)arg2;
- (void)addEntry:(id)arg1;
- (id)init;

@end

