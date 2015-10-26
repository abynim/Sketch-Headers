#import "NSException.h"

@interface BCReceiptValidationException : NSException
{
}

+ (void)raiseWithStatus:(unsigned long long)arg1 error:(int)arg2;
+ (void)raiseWithStatus:(unsigned long long)arg1;
+ (id)exceptionWithStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long status;

@end

