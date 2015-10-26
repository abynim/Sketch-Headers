#import "ECLogHandler.h"

@class NSMutableDictionary, NSURL;

@interface ECLogHandlerFile : ECLogHandler
{
    NSMutableDictionary *_files;
    NSURL *_logFolder;
}

@property(retain, nonatomic) NSURL *logFolder; // @synthesize logFolder=_logFolder;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (void)logString:(id)arg1 forChannel:(id)arg2;
- (id)logFileForChannel:(id)arg1;
- (id)init;

@end

