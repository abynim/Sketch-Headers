#import "NSObject.h"

@interface AFQueryStringPair : NSObject
{
    id _field;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)URLEncodedStringValueWithEncoding:(unsigned long long)arg1;
- (id)initWithField:(id)arg1 value:(id)arg2;

@end

