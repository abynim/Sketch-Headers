#import "_SVGText.h"

@interface SVGText : _SVGText
{
}

+ (id)styleDefaults;
- (id)svgAttributesDescription;
- (id)name;
- (void)processSelf:(id)arg1;
- (double)doubleValueFromXML:(id)arg1 attributeWithName:(id)arg2 orParent:(id)arg3;
- (void)applyEffectsToLayer:(id)arg1;
- (id)enclosingLayerForLayer:(id)arg1 parentLayer:(id)arg2;
- (id)makeOwnLayerWithParentLayer:(id)arg1;

@end

