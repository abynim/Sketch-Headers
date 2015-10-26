#import "SVGElement.h"

@class SVGColor;

@interface _SVGGradientStop : SVGElement
{
    SVGColor *_color;
    double _position;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
- (void).cxx_destruct;

@end

