#import "NSTokenField.h"

@interface BCAutosizingTokenField : NSTokenField
{
    double _maximumWidth;
}

@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
- (void)sizeToFitWithMaximumWidth;

@end

