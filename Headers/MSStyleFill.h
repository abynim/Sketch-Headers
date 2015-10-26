#import "_MSStyleFill.h"

@interface MSStyleFill : _MSStyleFill
{
    double _lightweightParentLayerCachedOpacity;
}

+ (id)defaultFillColor;
@property(nonatomic) double lightweightParentLayerCachedOpacity; // @synthesize lightweightParentLayerCachedOpacity=_lightweightParentLayerCachedOpacity;
- (BOOL)hasOpacity;
- (void)encodeWithCoder:(id)arg1;
- (void)initObjectWithCoder:(id)arg1;
- (void)setPatternTileScale:(double)arg1;
- (void)setPatternImage:(id)arg1 collection:(id)arg2;
- (id)defaultName;
- (void)initEmptyObject;
- (id)topViewForColorInspector:(id)arg1;
- (id)CSSAttributeString;
- (void)setPatternImage:(id)arg1;
- (void)updateColorCounter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;

@end

