#import "NSObject.h"

@interface ECErrorReporter : NSObject
{
}

+ (void)reportError:(id)arg1 message:(id)arg2;
+ (void)reportStatus:(int)arg1 message:(id)arg2;
+ (void)reportResult:(BOOL)arg1 message:(id)arg2;
+ (void)reportResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3;
+ (BOOL)checkStatus:(int)arg1;
+ (void)reportError:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3 assertInDebug:(BOOL)arg4;

@end

