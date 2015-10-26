#import "NSObject.h"

@class MSLayer;

@interface MSSnapItem : NSObject
{
    MSLayer *_layer;
}

+ (id)snapLinesForLayer:(id)arg1;
+ (id)snapperObjectWithLayers:(id)arg1;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (id)snapItemForDrawing;
- (struct CGRect)distanceRectangleToItem:(id)arg1 axis:(unsigned long long)arg2;
- (id)description;
@property(nonatomic) struct CGRect rect;
- (struct CGRect)boundsRect;
- (void)concatAncestorTransforms;
- (struct CGAffineTransform)preDrawingTransform;
- (void)refreshOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (BOOL)supportsResizingForSnapping;
- (struct CGRect)originalRect;
- (id)otherLayersForSnapping;
- (id)otherLayersForSizeSnapping;
- (id)artboardForSnapping;
- (id)snapLines;
- (id)snapEnumerations;
- (void)snapInBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayer:(id)arg1;

@end

