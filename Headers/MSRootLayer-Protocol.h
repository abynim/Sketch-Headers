#import "NSObject.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid;

@protocol MSRootLayer <NSObject>
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(nonatomic) struct CGPoint rulerBase;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(copy, nonatomic) MSSimpleGrid *grid;
@end

