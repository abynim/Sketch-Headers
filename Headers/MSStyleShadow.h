#import "_MSStyleShadow.h"

@interface MSStyleShadow : _MSStyleShadow
{
}

- (void)setOffsetY:(double)arg1;
- (void)setOffsetX:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setSpread:(double)arg1;
- (BOOL)isDefaultShadow;
- (BOOL)isDefaultGlow;
- (void)multiplyBy:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)initEmptyObject;
- (id)CSSAttributeString;
- (id)shadowForContext:(id)arg1;

@end

