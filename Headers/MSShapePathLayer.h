#import "_MSShapePathLayer.h"

#import "NSCoding.h"

@class NSBezierPath;

@interface MSShapePathLayer : _MSShapePathLayer <NSCoding>
{
    BOOL _isEditing;
}

+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithShapePath:(id)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)isLayerExportable;
- (BOOL)canBeContainedByGroup;
- (BOOL)isLine;
- (BOOL)calculateHasBlendedLayer;
- (void)prepareObjectCopy:(id)arg1;
- (id)pathStyle;
- (void)setEndDecorationType:(unsigned long long)arg1;
- (void)setStartDecorationType:(unsigned long long)arg1;
- (BOOL)shouldOwnStyle;
- (id)allCurvePoints;
- (void)multiplyBy:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)removeFromParent;
- (void)invalidateCache;
- (void)rectSizeDidChange:(id)arg1;
- (void)layerSizeDidChangeFromCorner:(long long)arg1;
- (BOOL)isPartOfClippingMask;
- (void)hideSelectionTemporarily;
@property(nonatomic) BOOL isClosed;
- (void)layerDidChange;
- (id)embedInShapeGroup;
- (void)setBooleanOperation:(long long)arg1;
- (BOOL)isNearlyEmpty;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1;
- (struct CGPoint)absolutePoint:(struct CGPoint)arg1;
- (void)simplify;
- (struct CGPoint)pointCenteredAfterPointIndex:(long long)arg1;
@property(retain, nonatomic) NSBezierPath *bezierPath;
- (BOOL)handleDoubleClick;
- (id)bezierPathWithTransforms;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)adjustFrameAfterEdit;
- (void)reversePath;
- (BOOL)shouldDrawSelection;
- (void)applyTransformation:(id)arg1;
- (void)flipHorizontal;
- (void)flipVertical;
- (BOOL)editable;
- (void)resetPoints;
- (void)removePathsAndReset;
- (void)applyPropertiesToBezier:(id)arg1;
- (void)closeLastPath:(BOOL)arg1;
- (id)handlerName;
- (id)defaultName;
- (void)initEmptyObject;
- (id)usedStyle;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (void)toggleClosePath;
- (struct CGRect)boundsForCursorPreview;
- (id)bezierPathForCursorPreview;
- (id)insertionCursor;
- (id)bezierPathForHover;
- (BOOL)booleanOperationCanBeReset;
- (BOOL)supportsInnerOuterBorders;
- (id)relativeRectWithExporter:(id)arg1;
- (id)addPolygonContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addShapeContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

@end

