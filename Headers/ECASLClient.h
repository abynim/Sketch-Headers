#import "NSObject.h"

@interface ECASLClient : NSObject
{
    struct __asl_object_s *_client;
    struct __asl_object_s *_msg;
}

+ (id)sharedInstance;
@property(nonatomic) struct __asl_object_s *msg; // @synthesize msg=_msg;
@property(nonatomic) struct __asl_object_s *client; // @synthesize client=_client;
- (void)error:(id)arg1;
- (void)log:(id)arg1;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

