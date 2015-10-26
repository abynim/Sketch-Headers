#import "PXListDocumentView.h"

@interface MSListDocumentView : PXListDocumentView
{
}

- (void)dealloc;
- (void)windowFocusDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;

@end

