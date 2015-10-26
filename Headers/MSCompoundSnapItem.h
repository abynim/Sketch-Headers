#import "MSSnapItem.h"

@class NSArray;

@interface MSCompoundSnapItem : MSSnapItem
{
    NSArray *_layers;
    NSArray *_relativeRects;
    struct CGRect _unionRect;
}

@property(nonatomic) struct CGRect unionRect; // @synthesize unionRect=_unionRect;
@property(retain, nonatomic) NSArray *relativeRects; // @synthesize relativeRects=_relativeRects;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)setRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (struct CGRect)boundsRect;
- (void)concatAncestorTransforms;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (id)otherLayersForSnapping;
- (struct CGRect)originalRect;
- (id)layer;
- (id)snapLines;
- (id)initWithLayers:(id)arg1;

@end

