#import "NSObject.h"

@class NSString;

@interface PDFOperatorInfo : NSObject
{
    SEL _selector;
    CDUnknownFunctionPointerType _callback;
    NSString *_operatorName;
    NSString *_methodName;
}

@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (id)description;

@end

