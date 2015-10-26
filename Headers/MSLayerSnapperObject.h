#import "NSObject.h"

@class MSLayer, MSSnapperRect;

@interface MSLayerSnapperObject : NSObject
{
    MSLayer *_layer;
    MSSnapperRect *_snapperRect;
}

+ (id)snapLinesForLayer:(id)arg1;
+ (id)snapperObjectWithLayer:(id)arg1;
+ (id)snapperObjectWithLayers:(id)arg1;
@property(retain, nonatomic) MSSnapperRect *snapperRect; // @synthesize snapperRect=_snapperRect;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (struct CGRect)boundsRect;
- (void)concatAncestorTransforms;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (BOOL)supportsResizingForSnapping;
- (id)originalRect;
- (id)otherLayersForSnapping;
- (id)artboardForSnapping;
- (id)snapLines;
- (id)snapEnumerations;
- (void)snapInBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayer:(id)arg1;

@end

