#import "NSObject.h"

@interface MSDotDrawing : NSObject
{
}

+ (void)resetZoomValue;
+ (void)setZoomValue:(double)arg1;
+ (void)drawShadowForHover:(BOOL)arg1 inBlock:(CDUnknownBlockType)arg2;
+ (id)gradient;
+ (id)shadowForHover:(BOOL)arg1;
+ (void)drawBezier:(id)arg1;
+ (void)drawRectAtPoint:(struct CGPoint)arg1;
+ (void)drawAtPoint:(struct CGPoint)arg1 isSelected:(BOOL)arg2 color:(id)arg3;
+ (void)drawAtPoint:(struct CGPoint)arg1 ofType:(long long)arg2 isSelected:(BOOL)arg3 isHovering:(BOOL)arg4;
+ (void)drawAtPoint:(struct CGPoint)arg1 ofType:(long long)arg2 isSelected:(BOOL)arg3 isHovering:(BOOL)arg4 transformStruct:(struct _CHTransformStruct)arg5;
+ (double)dotSizeForType:(long long)arg1;
+ (void)load;

@end

