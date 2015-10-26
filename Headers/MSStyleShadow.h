#import "_MSStyleShadow.h"

#import "MSColorUser.h"

@class NSString;

@interface MSStyleShadow : _MSStyleShadow <MSColorUser>
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
- (id)blendingViewForColorInspector:(id)arg1;
- (id)CSSAttributeString;
- (void)updateColorCounter:(id)arg1;
- (id)shadowForContext:(id)arg1;
- (double)lineWidthForStrokeType:(long long)arg1 lineWidth:(double)arg2;
- (double)growAmountforStrokeType:(long long)arg1 lineWidth:(double)arg2;
- (void)drawShadowFillAndStrokeForPath:(id)arg1 strokeType:(long long)arg2 lineWidth:(double)arg3;
- (void)drawShadowStrokeForPath:(id)arg1 strokeType:(long long)arg2 lineWidth:(double)arg3;
- (void)drawShadowFillForPath:(id)arg1 spread:(double)arg2;
- (id)shadowWithXOffset:(double)arg1 context:(id)arg2;
- (struct CGRect)boundingBoxForRect:(struct CGRect)arg1;
- (void)drawInnerShadowForPath:(id)arg1 context:(id)arg2;
- (void)drawShadowForRect:(struct CGRect)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)drawShadowForPath:(id)arg1 type:(unsigned long long)arg2 strokeType:(long long)arg3 fillShouldClip:(BOOL)arg4 lineWidth:(double)arg5 context:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

