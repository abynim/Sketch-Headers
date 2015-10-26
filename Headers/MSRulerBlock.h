#import "NSView.h"

@class MSContentDrawView;

@interface MSRulerBlock : NSView
{
    MSContentDrawView *_contentDrawView;
}

@property(nonatomic) __weak MSContentDrawView *contentDrawView; // @synthesize contentDrawView=_contentDrawView;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

