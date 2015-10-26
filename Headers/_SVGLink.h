#import "SVGDrawableElement.h"

@class SVGElement;

@interface _SVGLink : SVGDrawableElement
{
    SVGElement *_link;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) SVGElement *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)primitiveSetLink:(id)arg1;

@end

