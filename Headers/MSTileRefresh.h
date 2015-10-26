#import "NSObject.h"

@class MSPage, NSArray, NSColorSpace;

@interface MSTileRefresh : NSObject
{
    MSPage *_page;
    NSColorSpace *_colorSpace;
    NSArray *_artboardFrames;
    struct CGRect _contentRect;
}

@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void).cxx_destruct;

@end

