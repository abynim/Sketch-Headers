#import "NSObject.h"

@class NSBitmapImageRep, NSColorSpace, NSImage;

@interface BCScreenGrab : NSObject
{
    unsigned int _displayID;
    NSImage *_image;
    NSBitmapImageRep *_bitmapRep;
    NSColorSpace *_colorSpace;
}

+ (id)screenGrabForDisplay:(unsigned int)arg1;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) NSBitmapImageRep *bitmapRep; // @synthesize bitmapRep=_bitmapRep;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
- (void).cxx_destruct;
- (id)currentScreen;
- (BOOL)isRetinaScreen;
@property(readonly, nonatomic) struct CGRect screenFrame; // @dynamic screenFrame;

@end

