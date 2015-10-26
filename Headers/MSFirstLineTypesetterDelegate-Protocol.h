#import "NSObject.h"

@class MSFirstLineHeightTypesetter;

@protocol MSFirstLineTypesetterDelegate <NSObject>
- (double)baselineAdjustmentForTypesetter:(MSFirstLineHeightTypesetter *)arg1;
@end

