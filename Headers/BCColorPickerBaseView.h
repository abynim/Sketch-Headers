#import "NSControl.h"

@interface BCColorPickerBaseView : NSControl
{
    id _bc_target;
    SEL _bc_action;
}

@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawMarkerInRect:(struct CGRect)arg1;
- (id)markerShadow;
- (void)drawCheckerboardPatternInRect:(struct CGRect)arg1;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (struct CGRect)contentBounds;
- (id)undoManager;
- (id)lightShadow;
- (id)darkShadow;
- (void)drawRect:(struct CGRect)arg1;
- (id)initInBounds:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

@end

