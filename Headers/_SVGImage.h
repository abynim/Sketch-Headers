#import "SVGDrawableElement.h"

@class NSImage;

@interface _SVGImage : SVGDrawableElement
{
    NSImage *_image;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

