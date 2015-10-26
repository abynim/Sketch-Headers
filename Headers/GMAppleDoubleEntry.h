#import "NSObject.h"

@class NSData;

@interface GMAppleDoubleEntry : NSObject
{
    int entryID_;
    NSData *data_;
}

+ (id)entryWithID:(int)arg1 data:(id)arg2;
- (void).cxx_destruct;
- (id)data;
- (int)entryID;
- (id)initWithEntryID:(int)arg1 data:(id)arg2;

@end

