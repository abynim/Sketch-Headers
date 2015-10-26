#import "SVGBasicShape.h"

@interface _SVGRectangleShape : SVGBasicShape
{
    double _cornerRadius;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;

@end

