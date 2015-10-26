#import "MSEventHandler.h"

@class MSShapeGroup;

@interface MSInsertLineEventHandler : MSEventHandler
{
    CDUnknownBlockType _lineShapeCreator;
    MSShapeGroup *_lineShape;
}

@property(retain, nonatomic) MSShapeGroup *lineShape; // @synthesize lineShape=_lineShape;
@property(copy, nonatomic) CDUnknownBlockType lineShapeCreator; // @synthesize lineShapeCreator=_lineShapeCreator;
- (void).cxx_destruct;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)findCurrentGroup;
- (double)lineThickness;
- (id)style;
- (void)createShapeAtMouse:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)defaultCursor;
- (struct CGPoint)roundMouse:(struct CGPoint)arg1;

@end

