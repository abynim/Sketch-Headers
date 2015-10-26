#import "MSSnapItem.h"

@interface MSRectSnapItem : MSSnapItem
{
    BOOL _constrainProportions;
    struct CGRect _storedRect;
}

+ (id)snapperObjectWithRect:(struct CGRect)arg1 layer:(id)arg2;
@property(nonatomic) struct CGRect storedRect; // @synthesize storedRect=_storedRect;
@property(nonatomic) BOOL shouldConstrainProportions;
- (void)setRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (struct CGRect)boundsRect;
- (void)concatAncestorTransforms;
- (struct CGAffineTransform)preDrawingTransform;
- (void)refreshOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (double)rotation;
- (BOOL)supportsResizingForSnapping;
- (struct CGRect)originalRect;
- (id)artboardForSnapping;
- (id)snapLines;
- (id)snapItemForDrawing;
- (void)snapInBlock:(CDUnknownBlockType)arg1;

@end

