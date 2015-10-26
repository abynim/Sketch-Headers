#import "NSView.h"

@class MSExportRenderer;

@interface MSExportRendererView : NSView
{
    MSExportRenderer *_renderer;
}

+ (id)exportViewWithRenderer:(id)arg1;
@property(nonatomic) __weak MSExportRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;

@end

