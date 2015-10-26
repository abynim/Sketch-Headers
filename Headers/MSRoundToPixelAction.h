#import "MSBaseAction.h"

@interface MSRoundToPixelAction : MSBaseAction
{
}

- (void)roundCurvePoints:(id)arg1 path:(id)arg2;
- (void)roundCurvePointsInPath:(id)arg1;
- (void)roundLayerPoints:(id)arg1;
- (void)doRoundLayerFrame:(id)arg1;
- (void)roundLayerFrame:(id)arg1;
- (void)roundSelectedShapeHandlerPoints;
- (void)doPerformAction:(id)arg1;
- (BOOL)pathPointsAreNotIntegral:(id)arg1;
- (BOOL)layerPointsAreNotIntegral:(id)arg1;
- (BOOL)layerFrameIsNotIntegral:(id)arg1;
- (unsigned long long)roundingModeForLayer:(id)arg1;
- (unsigned long long)roundModeForShapeHandler;
- (unsigned long long)roundingMode;
- (BOOL)validate;
- (void)roundToPixel:(id)arg1;

@end

