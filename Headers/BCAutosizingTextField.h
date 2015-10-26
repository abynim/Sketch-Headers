#import "NSTextField.h"

@interface BCAutosizingTextField : NSTextField
{
    double _maximumWidth;
    double _maximumHeight;
}

@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
- (void)sizeToFitWithMaximumWidth;

@end

