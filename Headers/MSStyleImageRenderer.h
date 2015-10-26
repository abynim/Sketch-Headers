#import "MSStyleRenderer.h"

@class MSBitmapLayer;

@interface MSStyleImageRenderer : MSStyleRenderer
{
    BOOL _treatAsAlpha;
    MSBitmapLayer *_bitmapLayer;
}

+ (void)drawBitmapLayer:(id)arg1 context:(id)arg2 inRect:(struct CGRect)arg3;
@property(nonatomic) BOOL treatAsAlpha; // @synthesize treatAsAlpha=_treatAsAlpha;
@property(retain, nonatomic) MSBitmapLayer *bitmapLayer; // @synthesize bitmapLayer=_bitmapLayer;
- (void).cxx_destruct;
- (void)drawNineSliceImage;
- (BOOL)canDrawNineSliceContent;
- (void)drawImage;
- (void)doDrawImage;
- (void)render;

@end

