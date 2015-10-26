#import "NSObject.h"

@class MSReorderingContainerView;

@protocol MSReorderingContainerDelegate <NSObject>
- (void)containerBackground:(MSReorderingContainerView *)arg1 dragDidReorderChildAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@optional
- (unsigned long long)numberOfReorderableSubviewsForContainerBackground:(MSReorderingContainerView *)arg1;
- (double)startingOffsetForStackingContainerBackground:(MSReorderingContainerView *)arg1;
@end

