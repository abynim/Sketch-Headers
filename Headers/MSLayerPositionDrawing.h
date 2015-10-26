#import "NSObject.h"

@class MSLayer, NSArray;

@interface MSLayerPositionDrawing : NSObject
{
    BOOL _isEnabled;
    id <MSBasicDelegate> _delegate;
    MSLayer *_hoverLayer;
    double _zoomValue;
    NSArray *_hoverGuides;
}

@property(retain, nonatomic) NSArray *hoverGuides; // @synthesize hoverGuides=_hoverGuides;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak MSLayer *hoverLayer; // @synthesize hoverLayer=_hoverLayer;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isMeasuringDistance;
- (void)findHoverGuides:(struct CGPoint)arg1;
- (void)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)clear;
- (void)drawDistanceToEnclosingFrame:(struct CGRect)arg1 zoom:(double)arg2;
- (struct CGRect)verticalRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (struct CGRect)horizontalRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (double)dashesOffset;
- (void)applyDashPattern:(id)arg1;
- (void)drawHorizontalDashLinesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawVerticalDashLinesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawHeightBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawWidthBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawOutlineForRect:(struct CGRect)arg1;
- (void)drawDistanceFromSelectionToHover;
- (void)drawDistanceToGuidesWithZoom;
- (struct CGRect)selectedLayersRect;
- (struct CGRect)enclosingGroupRectOrArtboard;
- (void)draw;

@end

