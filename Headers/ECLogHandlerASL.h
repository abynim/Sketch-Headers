#import "ECLogHandler.h"

@class NSMutableDictionary;

@interface ECLogHandlerASL : ECLogHandler
{
    struct __asl_object_s *_aslClient;
    NSMutableDictionary *_aslMsgs;
}

@property(retain, nonatomic) NSMutableDictionary *aslMsgs; // @synthesize aslMsgs=_aslMsgs;
@property(nonatomic) struct __asl_object_s *aslClient; // @synthesize aslClient=_aslClient;
- (void).cxx_destruct;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (void)dealloc;
- (id)init;

@end

