#import "SVGDrawableElement.h"

@class NSString;

@interface _SVGText : SVGDrawableElement
{
    BOOL _adjustSpacingAndGlyphs;
    short _anchor;
    double _dx;
    double _dy;
    double _length;
    double _rotate;
    NSString *_text;
    double _x;
    double _y;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double dy; // @synthesize dy=_dy;
@property(nonatomic) double dx; // @synthesize dx=_dx;
@property(nonatomic) short anchor; // @synthesize anchor=_anchor;
@property(nonatomic) BOOL adjustSpacingAndGlyphs; // @synthesize adjustSpacingAndGlyphs=_adjustSpacingAndGlyphs;
- (void).cxx_destruct;

@end

