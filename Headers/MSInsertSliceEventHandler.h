#import "MSInsertLayerEventHandler.h"

@class MSLayer, NSArray;

@interface MSInsertSliceEventHandler : MSInsertLayerEventHandler
{
    NSArray *_allSlices;
    MSLayer *_hoveringLayer;
}

@property(retain, nonatomic) MSLayer *hoveringLayer; // @synthesize hoveringLayer=_hoveringLayer;
@property(retain, nonatomic) NSArray *allSlices; // @synthesize allSlices=_allSlices;
- (void).cxx_destruct;
- (id)toolbarIdentifier;
- (void)drawInRect:(struct CGRect)arg1;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)layersBelowPoint:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)handlerGotFocus;

@end

