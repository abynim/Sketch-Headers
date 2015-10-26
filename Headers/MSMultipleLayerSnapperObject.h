#import "MSLayerSnapperObject.h"

@class NSArray;

@interface MSMultipleLayerSnapperObject : MSLayerSnapperObject
{
    NSArray *_layers;
}

@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (struct CGRect)boundsRect;
- (void)concatAncestorTransforms;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (id)otherLayersForSnapping;
- (id)originalRect;
- (id)layer;
- (id)snapLines;
- (id)initWithLayers:(id)arg1;

@end

