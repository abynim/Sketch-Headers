#import "NSObject.h"

@interface MSFillAndBorderColorScreenPicker : NSObject
{
}

+ (void)setPreferredStylePartName:(id)arg1;
+ (void)changeColorForTextLayer:(id)arg1 color:(id)arg2;
+ (id)stylesForColorAdjusting:(id)arg1;
+ (void)changeColorForNormalLayer:(id)arg1 color:(id)arg2;
+ (void)applyColor:(id)arg1 toLayers:(id)arg2;
+ (void)pickColorForLayers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

