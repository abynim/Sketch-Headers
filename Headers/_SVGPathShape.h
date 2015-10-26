#import "SVGDrawableElement.h"

@class NSBezierPath;

@interface _SVGPathShape : SVGDrawableElement
{
    BOOL _closed;
    NSBezierPath *_path;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
- (void).cxx_destruct;

@end

