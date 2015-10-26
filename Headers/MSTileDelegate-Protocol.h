#import "NSObject.h"

@class MSPage, MSTile;

@protocol MSTileDelegate <NSObject>
- (void)tileDidDraw:(MSTile *)arg1 page:(MSPage *)arg2;
@end

