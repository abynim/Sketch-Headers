#import "NSObject.h"

@class NSDateFormatter, NSString;

@interface ZKLog : NSObject
{
    unsigned long long _minimumLevel;
    int _pid;
    NSDateFormatter *_dateFormatter;
    NSString *_logFilePath;
    struct __sFILE *_logFilePointer;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property struct __sFILE *logFilePointer; // @synthesize logFilePointer=_logFilePointer;
@property(copy) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property int pid; // @synthesize pid=_pid;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)levelToLabel:(unsigned long long)arg1;
@property unsigned long long minimumLevel; // @dynamic minimumLevel;
- (void)logFile:(char *)arg1 lineNumber:(unsigned long long)arg2 level:(unsigned long long)arg3 format:(id)arg4;

@end

