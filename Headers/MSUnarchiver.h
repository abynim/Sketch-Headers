#import "NSKeyedUnarchiver.h"

@interface MSUnarchiver : NSKeyedUnarchiver
{
    long long _version;
    SEL _propertyDecoder;
}

+ (id)unarchiveObjectFromURL:(id)arg1 actualVersion:(long long *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1 actualVersion:(long long *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1 asVersion:(long long)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)defineReplacementClasses;
+ (void)initialize;
@property(readonly, nonatomic) SEL propertyDecoder; // @synthesize propertyDecoder=_propertyDecoder;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)setDecodingVersion:(long long)arg1;

@end

