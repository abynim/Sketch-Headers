#import "MSBaseAction.h"

@interface MSMaskWithShapeAction : MSBaseAction
{
}

- (id)label;
- (BOOL)showInToolbar;
- (void)disableSuperfluousStylesForMaskStyle:(id)arg1;
- (void)finishGroupForMask:(id)arg1;
- (id)makeGroupForMask;
- (void)prepareShapeLayerForMask:(id)arg1;
- (void)createMaskWithShape:(id)arg1 otherLayers:(id)arg2;
- (void)doPerformAction:(id)arg1;
- (void)maskWithShape:(id)arg1;
- (BOOL)validate;

@end

