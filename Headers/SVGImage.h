#import "_SVGImage.h"

@interface SVGImage : _SVGImage
{
}

+ (void)initialize;
- (void)processSelf:(id)arg1;
- (void)applyEffectsToLayer:(id)arg1;
- (void)adjustSizeForChildrenOfLayer:(id)arg1 parentLayer:(id)arg2;
- (id)makeOwnLayerWithParentLayer:(id)arg1;

@end

