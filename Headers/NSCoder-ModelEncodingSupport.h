#import "NSCoder.h"

@interface NSCoder (ModelEncodingSupport)
- (id)decodeImageDataForKey:(id)arg1;
- (struct CGPoint)decodePointFromStringForKey:(id)arg1;
- (struct CGRect)decodeRectFromStringForKey:(id)arg1;
- (double)decodeDoubleFromObjectForKey:(id)arg1;
- (float)decodeFloatFromObjectForKey:(id)arg1;
- (long long)decodeIntegerFromObjectForKey:(id)arg1;
- (long long)decodeInt64FromObjectForKey:(id)arg1;
- (int)decodeInt32FromObjectForKey:(id)arg1;
- (int)decodeIntFromObjectForKey:(id)arg1;
- (BOOL)decodeBoolFromObjectForKey:(id)arg1;
- (void)encodeImageData:(id)arg1 forKey:(id)arg2;
- (void)encodePointAsString:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeRectAsString:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeDoubleAsObject:(double)arg1 forKey:(id)arg2;
- (void)encodeFloatAsObject:(float)arg1 forKey:(id)arg2;
- (void)encodeIntegerAsObject:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64AsObject:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32AsObject:(int)arg1 forKey:(id)arg2;
- (void)encodeIntAsObject:(int)arg1 forKey:(id)arg2;
- (void)encodeBoolAsObject:(BOOL)arg1 forKey:(id)arg2;
@end

