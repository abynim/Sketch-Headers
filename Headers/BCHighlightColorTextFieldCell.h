#import "NSTextFieldCell.h"

@class NSColor;

@interface BCHighlightColorTextFieldCell : NSTextFieldCell
{
    NSColor *_highlightColor;
}

@property(retain, nonatomic) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

