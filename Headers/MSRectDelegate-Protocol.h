#import "NSObject.h"

@class MSRect;

@protocol MSRectDelegate <NSObject>
- (void)rectDidChange:(MSRect *)arg1 fromRect:(struct CGRect)arg2;
@end

