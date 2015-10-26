#import "NSDate.h"

@interface NSDate (NTP)
+ (id)dateWithNTPRepresentation_bc:(unsigned long long)arg1;
+ (id)NTPEpoch_bc;
- (unsigned long long)NTPRepresentation_bc;
@end

