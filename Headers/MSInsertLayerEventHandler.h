#import "MSDragRectEventHandler.h"

@class MSLayer;

@interface MSInsertLayerEventHandler : MSDragRectEventHandler
{
    BOOL _shouldApplyDefaultStyle;
    MSLayer *_prototypeLayer;
    CDUnknownBlockType _completionBlock;
    MSLayer *_insertedLayer;
}

@property(retain, nonatomic) MSLayer *insertedLayer; // @synthesize insertedLayer=_insertedLayer;
@property(nonatomic) BOOL shouldApplyDefaultStyle; // @synthesize shouldApplyDefaultStyle=_shouldApplyDefaultStyle;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (BOOL)allowsSwitchToInsertAction;
- (void)flagsChanged:(id)arg1;
- (void)dealloc;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)currentGroup;
- (void)insertNewLayerInCurrentGroup:(id)arg1;
- (id)insertAsNewLayer:(struct CGRect)arg1;
- (id)performActionWithRect:(struct CGRect)arg1;
- (void)drawRectPreview;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

