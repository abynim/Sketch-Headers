#import "NSObject.h"

@class MSLayer, NSArray;

@interface MSLayerPositionDrawing : NSObject
{
    id <MSBasicDelegate> _delegate;
    MSLayer *_hoverLayer;
    double _zoomValue;
    NSArray *_hoverGuides;
}

@property(retain, nonatomic) NSArray *hoverGuides; // @synthesize hoverGuides=_hoverGuides;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak MSLayer *hoverLayer; // @synthesize hoverLayer=_hoverLayer;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)willDraw;
- (void)findHoverGuides:(struct CGPoint)arg1;
- (void)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)clear;
- (void)drawDistanceToEnclosingFrame:(id)arg1 zoom:(double)arg2;
- (id)verticalRectBetweenRect:(id)arg1 andRect:(id)arg2;
- (id)horizontalRectBetweenRect:(id)arg1 andRect:(id)arg2;
- (double)dashesOffset;
- (void)applyDashPattern:(id)arg1;
- (void)drawHorizontalDashLinesBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawVerticalDashLinesBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawHeightBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawWidthBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawOutlineForRect:(id)arg1;
- (void)drawDistanceFromSelectionToHover;
- (void)drawDistanceToGuidesWithZoom;
- (id)selectedLayersRect;
- (id)enclosingGroupRectOrArtboard;
- (void)draw;

@end

