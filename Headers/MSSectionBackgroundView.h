#import "NSView.h"

@interface MSSectionBackgroundView : NSView
{
}

+ (long long)requiredHeightForViews:(id)arg1;
+ (id)separatorBetweenView:(id)arg1 andView:(id)arg2 controller:(id)arg3;
+ (id)sectionBackgroundWithController:(id)arg1;
- (BOOL)isFlipped;
- (void)drawWhiteHeader;
- (void)drawRect:(struct CGRect)arg1;
- (void)stackSubviews;
- (void)recalculateHeight;

@end

