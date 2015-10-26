#import "NSObject.h"

@class NSString;

@interface ECLogHandler : NSObject
{
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)wasDisabledForChannel:(id)arg1;
- (void)wasEnabledForChannel:(id)arg1;
- (id)simpleOutputStringForChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (long long)caseInsensitiveCompare:(id)arg1;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;

@end

