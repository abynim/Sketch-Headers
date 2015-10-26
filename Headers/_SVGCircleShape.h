#import "SVGBasicShape.h"

@interface _SVGCircleShape : SVGBasicShape
{
    double _cx;
    double _cy;
    double _r;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double r; // @synthesize r=_r;
@property(nonatomic) double cy; // @synthesize cy=_cy;
@property(nonatomic) double cx; // @synthesize cx=_cx;

@end

