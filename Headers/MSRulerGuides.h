#import "NSObject.h"

@interface MSRulerGuides : NSObject
{
}

+ (struct CGRect)absoluteFrameOfSelectedLayers:(id)arg1;
+ (id)snapGuidesForRulerData:(id)arg1 axis:(unsigned long long)arg2;
+ (id)verticalGuidesForGrid:(id)arg1 ruler:(id)arg2 forDrawing:(BOOL)arg3 inRect:(struct CGRect)arg4 rulersVisible:(BOOL)arg5;
+ (id)verticalGuidesForHorizontalRuler:(id)arg1 forDrawing:(BOOL)arg2 inRect:(struct CGRect)arg3 rulersVisible:(BOOL)arg4;
+ (id)verticalGuidesForHorizontalRuler:(id)arg1 forDrawing:(BOOL)arg2 rulersVisible:(BOOL)arg3;
+ (id)horizontalGuidesForGrid:(id)arg1 ruler:(id)arg2 forDrawing:(BOOL)arg3 inRect:(struct CGRect)arg4;
+ (id)horizontalGuidesForVerticalRuler:(id)arg1 forDrawing:(BOOL)arg2 inRect:(struct CGRect)arg3 rulersVisible:(BOOL)arg4;
+ (id)horizontalGuidesForVerticalRuler:(id)arg1 forDrawing:(BOOL)arg2 rulersVisible:(BOOL)arg3;

@end

