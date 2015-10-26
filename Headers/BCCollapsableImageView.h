#import "NSView.h"

@class NSImage, NSLayoutConstraint;

@interface BCCollapsableImageView : NSView
{
    NSImage *_image;
    NSLayoutConstraint *_widthConstraint;
    double _expandedWidth;
}

@property(nonatomic) double expandedWidth; // @synthesize expandedWidth=_expandedWidth;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)connectWidthConstraint;
- (void)awakeFromNib;

@end

