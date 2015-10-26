#import "NSObject.h"

@class NSBitmapImageRep;

@interface MSLayerCachedImage : NSObject
{
    NSBitmapImageRep *_image;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSBitmapImageRep *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

