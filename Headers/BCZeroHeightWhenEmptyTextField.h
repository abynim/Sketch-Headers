#import "NSTextField.h"

@interface BCZeroHeightWhenEmptyTextField : NSTextField
{
    double _paddingIfNotEmpty;
}

@property(nonatomic) double paddingIfNotEmpty; // @synthesize paddingIfNotEmpty=_paddingIfNotEmpty;
- (struct CGSize)intrinsicContentSize;

@end

