#import "SVGBasicShape.h"

@interface _SVGEllipseShape : SVGBasicShape
{
    double _cx;
    double _cy;
    double _rx;
    double _ry;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double ry; // @synthesize ry=_ry;
@property(nonatomic) double rx; // @synthesize rx=_rx;
@property(nonatomic) double cy; // @synthesize cy=_cy;
@property(nonatomic) double cx; // @synthesize cx=_cx;

@end

