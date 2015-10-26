#import "NSView.h"

@class NSArray;

@interface MSInspectorStackView : NSView
{
    NSArray *_sectionViewControllers;
}

@property(retain, nonatomic) NSArray *sectionViewControllers; // @synthesize sectionViewControllers=_sectionViewControllers;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)reloadWithViewControllers:(id)arg1;
- (void)subViewFrameDidChange:(id)arg1;
- (void)stack;
- (void)recalculateHeight:(id)arg1;
- (void)recalculateHeight;
- (void)reloadSubviews;

@end

