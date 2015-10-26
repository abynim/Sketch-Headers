#import "CALayer.h"

@class NSArray, NSColor, NSNumberFormatter;

@interface MSRulerViewLayer : CALayer
{
    BOOL _shouldDrawGuides;
    unsigned long long _axis;
    NSNumberFormatter *_formatter;
    NSColor *_snapColor;
    double _zoomValue;
    double _baseLine;
    NSArray *_guides;
    NSColor *_lineColor;
    struct CGRect _occupiedRegion;
}

@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) BOOL shouldDrawGuides; // @synthesize shouldDrawGuides=_shouldDrawGuides;
@property(retain, nonatomic) NSArray *guides; // @synthesize guides=_guides;
@property(nonatomic) struct CGRect occupiedRegion; // @synthesize occupiedRegion=_occupiedRegion;
@property(nonatomic) double baseLine; // @synthesize baseLine=_baseLine;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) NSColor *snapColor; // @synthesize snapColor=_snapColor;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (long long)rulerHeight;
- (long long)rulerLength;
- (void)drawAlignmentGuides;
- (void)drawOccupiedRegion;
- (void)drawBackgroundForLabel:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2 drawBackground:(BOOL)arg3;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawLineAtPosition:(double)arg1 withOptions:(unsigned long long)arg2;
- (void)drawMetricsWithOptions:(long long)arg1;
- (void)drawMetrics;
- (void)drawBackground;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

