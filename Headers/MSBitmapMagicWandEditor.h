#import "MSBitmapEditor.h"

@class NSBitmapImageRep, NSOperationQueue;

@interface MSBitmapMagicWandEditor : MSBitmapEditor
{
    BOOL _didDrag;
    NSBitmapImageRep *_mask;
    NSBitmapImageRep *_cachedBitSafeRep;
    NSOperationQueue *_queue;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _mouseEndPoint;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(retain, nonatomic) NSBitmapImageRep *cachedBitSafeRep; // @synthesize cachedBitSafeRep=_cachedBitSafeRep;
@property(retain, nonatomic) NSBitmapImageRep *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGPoint mouseEndPoint; // @synthesize mouseEndPoint=_mouseEndPoint;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
- (void).cxx_destruct;
- (BOOL)isValidRect:(struct CGRect)arg1;
- (void)drawOvals;
@property(readonly, nonatomic) struct CGRect dragCirclePageBounds;
@property(readonly, nonatomic) struct CGRect dragCircleBounds;
- (void)drawMask;
- (void)draw;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (double)tolerance;
- (void)magicWandWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)init;

@end

