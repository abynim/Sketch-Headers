#import "NSView.h"

@class MSLayer;

@interface MSLayerPreviewView : NSView
{
    MSLayer *_previewedLayer;
}

@property(retain, nonatomic) MSLayer *previewedLayer; // @synthesize previewedLayer=_previewedLayer;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

