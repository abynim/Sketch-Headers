#import "NSObject.h"

@class NSString;

@interface FMStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    NSString *_query;
    long long _useCount;
    BOOL _inUse;
}

@property BOOL inUse; // @synthesize inUse=_inUse;
@property long long useCount; // @synthesize useCount=_useCount;
@property(retain) NSString *query; // @synthesize query=_query;
@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (id)description;
- (void)reset;
- (void)close;
- (void)dealloc;
- (void)finalize;

@end

