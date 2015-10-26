#import "NSData.h"

@interface NSData (ZKAdditions)
- (id)zk_deflateWithLevel:(int)arg1 windowBits:(int)arg2 memoryLevel:(int)arg3 strategy:(int)arg4;
- (id)zk_deflate;
- (id)zk_inflateWithWindowBits:(int)arg1;
- (id)zk_inflate;
- (unsigned int)zk_crc32:(unsigned long long)arg1;
- (unsigned int)zk_crc32;
- (id)zk_stringOffsetBy:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (BOOL)zk_hostBoolOffsetBy:(unsigned long long *)arg1;
- (unsigned long long)zk_hostInt64OffsetBy:(unsigned long long *)arg1;
- (unsigned int)zk_hostInt32OffsetBy:(unsigned long long *)arg1;
- (unsigned short)zk_hostInt16OffsetBy:(unsigned long long *)arg1;
@end

