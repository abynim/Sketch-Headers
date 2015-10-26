#import "NSObject.h"

@class NSDictionary, NSString;

@interface SVGTextSpan : NSObject
{
    NSString *_text;
    NSDictionary *_attributes;
    struct CGRect _rect;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

