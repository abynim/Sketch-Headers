#import "_SVGGradient.h"

@interface SVGGradient : _SVGGradient
{
}

- (id)stopsElements;
- (id)svgAttributesDescription;
- (struct CGPoint)to;
- (struct CGPoint)from;
- (void)setupLinearGradientWithXML:(id)arg1;
- (void)setupRadialGradientWithXML:(id)arg1;
- (void)processSelf:(id)arg1;

@end

